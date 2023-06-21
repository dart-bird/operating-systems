#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

#define BUFFER_SIZE 25
#define READ_END 0
#define WRITE_END 1

int main(void)
{
    char write_msg[BUFFER_SIZE] = { 0 };
    char read_msg[BUFFER_SIZE] = { 0 };
    int fd_a[2], fd_b[2];
    pid_t pid;

    if (pipe(fd_a) == -1 || pipe(fd_b) == -1) {
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

        close(fd_a[WRITE_END]);
        close(fd_b[READ_END]);

        for (int i = 1000; i <= 1004; i++) {
            read(fd_a[READ_END], read_msg, BUFFER_SIZE);
            printf("child got message: \"%s\"\n", read_msg);

            snprintf(write_msg, sizeof(write_msg), "child %d", i);
            write(fd_b[WRITE_END], write_msg, strlen(write_msg) + 1);

            sleep(1);
        }

        close(fd_a[WRITE_END]);
        close(fd_b[READ_END]);

    } else {

        close(fd_a[READ_END]);
        close(fd_b[WRITE_END]);

        for (int i = 0; i <= 4; i++) {
            snprintf(write_msg, sizeof(write_msg), "parent %d", i);
            write(fd_a[WRITE_END], write_msg, strlen(write_msg) + 1);

            read(fd_b[READ_END], read_msg, BUFFER_SIZE);
            printf("parent got message: \"%s\"\n", read_msg);

            sleep(1);
        }

        close(fd_a[READ_END]);
        close(fd_b[WRITE_END]);
    }

    return 0;
}
