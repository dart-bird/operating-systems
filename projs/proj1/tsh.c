#include <fcntl.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/wait.h>
#include <unistd.h>

#define MAX_LINE 80

void in_redirection(int redirection_fd, char* filename)
{
    redirection_fd = open(filename, O_RDONLY);
    if (redirection_fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }
    dup2(redirection_fd, STDIN_FILENO);
    close(redirection_fd);
}

void out_redirection(int redirection_fd, char* filename)
{
    redirection_fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0666);
    if (redirection_fd == -1) {
        perror("open");
    }
    dup2(redirection_fd, STDOUT_FILENO);
    close(redirection_fd);
}

void pipe_in_out(int* pipe_fd, pid_t pipe_pid, char** argv, int* lastIdx)
{
    if (pipe(pipe_fd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }
    if ((pipe_pid = fork()) == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pipe_pid == 0) {
        close(pipe_fd[0]);
        dup2(pipe_fd[1], STDOUT_FILENO);
        close(pipe_fd[1]);

        argv[*lastIdx] = NULL;
        execvp(argv[0], argv);
        perror("execvp");
        exit(EXIT_FAILURE);
    } else {
        close(pipe_fd[1]);
        dup2(pipe_fd[0], STDIN_FILENO);
        close(pipe_fd[0]);
        *lastIdx = 0;
    }
}

static void cmdexec(char* cmd)
{
    char* argv[MAX_LINE / 2 + 1];
    int argc = 0;
    char *p, *q;

    p = cmd;
    p += strspn(p, " \t");
    do {
        q = strpbrk(p, " \t\'\"");
        if (q == NULL || *q == ' ' || *q == '\t') {
            q = strsep(&p, " \t");
            if (*q)
                argv[argc++] = q;
        } else if (*q == '\'') {
            q = strsep(&p, "\'");
            if (*q)
                argv[argc++] = q;
            q = strsep(&p, "\'");
            if (*q)
                argv[argc++] = q;
        } else {
            q = strsep(&p, "\"");
            if (*q)
                argv[argc++] = q;
            q = strsep(&p, "\"");
            if (*q)
                argv[argc++] = q;
        }
    } while (p);
    argv[argc] = NULL;
    if (argc > 0) {
        int redirection_fd = -1;
        int pipe_fd[2];

        pid_t pipe_pid = -1;
        int idx_for_remove = 0;
        char* removed_argv[MAX_LINE / 2 + 1];

        for (int i = 0; i < argc; i++) {

            if (strcmp(argv[i], "<") == 0) {
                if (i + 1 < argc) {
                    in_redirection(redirection_fd, argv[++i]);
                } else {
                    fprintf(stderr, "You have to give a file after '<' ...\n");
                    exit(EXIT_FAILURE);
                }
            } else if (strcmp(argv[i], ">") == 0) {
                if (i + 1 < argc) {
                    out_redirection(redirection_fd, argv[++i]);
                } else {
                    fprintf(stderr, "You have to give a file after '>' ...\n");
                    exit(EXIT_FAILURE);
                }
            } else if (strcmp(argv[i], "|") == 0) {
                if (i + 1 < argc) {
                    pipe_in_out(pipe_fd, pipe_pid, removed_argv, &idx_for_remove);
                } else {
                    fprintf(stderr, "You have to give a command after '|' ...\n");
                    exit(EXIT_FAILURE);
                }

            } else {
                removed_argv[idx_for_remove++] = argv[i];
            }
        }
        removed_argv[idx_for_remove] = NULL;
        execvp(removed_argv[0], removed_argv);
    }
}

int main(void)
{
    char cmd[MAX_LINE + 1];
    int len;
    pid_t pid;
    int background;

    while (true) {
        pid = waitpid(-1, NULL, WNOHANG);
        if (pid > 0)
            printf("[%d] + done\n", pid);
        printf("tsh> ");
        fflush(stdout);
        len = read(STDIN_FILENO, cmd, MAX_LINE);
        if (len == -1) {
            perror("read");
            exit(EXIT_FAILURE);
        }
        cmd[--len] = '\0';
        if (len == 0)
            continue;
        if (!strcasecmp(cmd, "exit"))
            break;
        char* p = strchr(cmd, '&');
        if (p != NULL) {
            background = 1;
            *p = '\0';
        } else
            background = 0;
        if ((pid = fork()) == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            cmdexec(cmd);
            exit(EXIT_SUCCESS);
        } else if (!background)
            waitpid(pid, NULL, 0);
    }
    return 0;
}
