#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
    printf("Hello, World!\n");


    int fd = open("a.txt",O_RDONLY);
    if(fd == -1){
        perror("open");
        return -1;
    }
    printf("open success\n");


    //read()
    //ssize_t read(int fd, void *buf, size_t count);
    //write()
    //ssize_t write(int fd, const void *buf, size_t count);



    close(fd);
    return 0;
}
