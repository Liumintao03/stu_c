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
    int fd = open(path, O_RDONLY);
    if(fd < 0) {
        perror("open");
        return -1;
    }
    printf("reader open success\n");
    char buf[1024] = {0};
    int ret;
    while (1) {
// *str = "icbiccbircbiu"
// buf = hello\n
// a\nllo\n
// memset(buf, 0, sizeof(buf));
        ret = read(fd, buf, sizeof(buf));
        if (ret <= 0) {
            break;
        }
        printf("ret:%d\n", ret);
// h e l l o
// 0 1 2 3 4 5 ----buf下标
        buf[ret] = 0;
// if (strcmp(buf, "quit") == 0) {
// break;
// }
        printf("buf:%s\n", buf);
    }
    close(fd);
    return 0;
}