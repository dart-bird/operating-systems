#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int value = 5;
#define READ_END 0
#define WRITE_END 1

int main()
{
    int fd[2];
    pid_t pid;

    if (pipe(fd) == -1) {
        printf("PIPE ERROR\n");
        fprintf(stderr, "Pipe failed");
        return 1;
    }

    pid = fork();

    if (pid < 0) {
        printf("FORK ERROR\n");
        fprintf(stderr, "Fork failed");
        return 1;
    }

    if (pid == 0) {
        value += 15;
        close(fd[READ_END]);
        write(fd[WRITE_END], &value, sizeof(int));
        close(fd[WRITE_END]);
        return 0;
    } else if (pid > 0) {
        wait(NULL);
        close(fd[WRITE_END]);
        read(fd[READ_END], &value, sizeof(int));
        close(fd[READ_END]);
        printf("PARENT: value = %d\n", value); /* LINE A */
        return 0;
    }
}
