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


    //read()
    //ssize_t read(int fd, void *buf, size_t count);
    //write()
    //ssize_t write(int fd, const void *buf, size_t count);
    //指针偏移
    //off_t lseek(int fd, off_t offset, int whence);
    lseek(fd, 0, SEEK_END);
    int ret = write(fd,"abc",3);
    if(ret<0){
        perror("write:");
        return -1;
    }
    printf("write success,size = %d\n",ret);

    close(fd);
    return 0;
}
