//
// Created by 35376 on 2025/11/19.
//
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main() {
    char *path = "/home/lmt/project/pipesmy_fifo";
    int fd = open(path, O_WRONLY);
    if(fd < 0) {
        perror("open");
        return -1;
    }
    printf("writer open success\n");
// stdin 输⼊ fgets
    char buf[1024] = {0};
    int ret;
    while (1) {
        printf("<input>:\n");
        char *p = fgets(buf, sizeof(buf), stdin);
        if (p == NULL) {
// EOF ctrl + d
            break;
        }
        buf[strlen(buf) - 1] = 0;
        if(strcmp(buf, "quit") == 0) {
            write(fd, buf, strlen(buf));
            break;
        }
        ret = write(fd, buf, strlen(buf));
        printf("ret:%d\n", ret);
    }
    close(fd);
    return 0;
}