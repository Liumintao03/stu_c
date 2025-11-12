#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
int main() {
    int pid;
    pid = fork();
    if (pid > 0) {
// ⽗进程
        printf("this is the father process\n");
        int status;
        int ret;
//ret = wait(&status);
        waitpid(-1, &status, 0);
        if (ret == -1) {
            perror("wait");
            return -1;
        }
        printf("child exit %d\n", WEXITSTATUS(status));
    } else if (pid == 0){
// ⼦进程
// sleep(5);
        printf("this is the child process\n");
        return 1;
        exit(1);
    } else{
        perror("fork\n");
        return -1;
    }
    return 0;
    exit(0);
}