#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void) {
    printf("Hello, World!\n");

    
    int fd = open("a.txt",int flags);

    return 0;
}
