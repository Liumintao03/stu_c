#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
    printf("Hello, World!\n");


    int fd = open("a.txt",O_RDWR);
    if(fd == -1){
        perror("open");
        return -1;
    }
    printf("open success\n");

    close(fd);
    return 0;
}
