//
// Created by 35376 on 2025/11/6.
//
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <error.h>
#include <errno.h>
#include <string.h>
//MyCp 1.src_file 2.new_file
//      要拷贝     拷贝到

int main(int argc, char *argv[]) {
//argc（参数计数）
//类型：int
//含义：命令行参数的总个数
//包括程序名本身
//至少为 1（因为程序名总是第一个参数）
//argv（参数数组）
//类型：char *argv[]（字符串指针数组）
//含义：存储所有命令行参数的字符串数组
//argv[0] = 程序名（或完整路径）
//argv[1] = 第一个参数
//argv[2] = 第二个参数

    //参数判断      3
    if (argc != 3) {
        //两种用法
        //将错误信息输出到标准错误流
        fprintf(stderr, "using error:MyCp src_file new_file");
        //将错误信息输出到标准文件描述符
        dprintf(STDOUT_FILENO, "using error:MyCp src_file new_file");
        return -1;
    }

    //sec_fd
    //不存在
    //存在
    //只读
    int src_fd = open(argv[1], O_RDONLY);
    if (src_fd < 0) {
        perror("open:");
        return -1;
    }
    printf("open success\n");

    //new_fd
    //存在？清空？不清空？
    //不存在，新建                                //这个和creat一起使用，用来判断文件是否存在，如果存在就报错
    int new_fd = open(argv[2], O_CREAT | O_EXCL | O_RDONLY, 0644);
    if (new_fd < 0) {
        //进入就说明已经有文件了，接下来进行判断
        //如果打开错误
        if (errno != EEXIST) {
            perror("open:");
            close(src_fd);
            close(new_fd);
            return -1;
        }

        //如果存在
        printf("文件存在，是否删除\n");
        printf("yes  or  no  \n");

        //按行读
        char buf[300];
        //接收是否删除的指令
        fgets(buf, sizeof(buf), stdin);
        //yes+\n+\0
        //比较两个字符串的前几个字符，忽略大小写。
        if (strncasecmp(buf, "yes", 3) == 0) {
            //删除文件内容
            new_fd = open(argv[2], O_TRUNC | O_EXCL | O_RDONLY);
            if (new_fd < 0) {
                perror("open");
                close(new_fd);
                return -1;
            }
        } else {
            //不删除
            printf("dosn't delet ");
            close(src_fd);
            close(new_fd);
        }
    }else{
        new_fd = open(argv[2], O_CREAT | O_RDWR, 0644);

    }
    //没进入就说明没有文件，新建
    printf("create sucess\n");
    //拷贝代码
    //创建临时存储空间
    char buf[200];
    //创建read操作符
    int ret = 200;
    //总个数
    int cnt = 0;

    //拷贝代码
    //一直读取和写入，直到ret<0;
    while (ret) {
        //读取要复制的文件内容，读取到buf，读取buf个字节的数据（sizeof）
        //read的返回值是成功读取到的字节数
        //read的返回值为0代表文件的末尾
        ret = read(src_fd, buf, sizeof(buf));
        //如果ret<0即读取失败,读取完毕
        if (ret < 0) {
            perror("open");
            break;
        }
        cnt = cnt + ret;
        //将buf里面的内容写入到new_buf,写入ret个字节
        write(new_fd, buf, ret);
    }

    //cnt
    printf("cnt:%d\n", cnt);
    close(src_fd);
    close(new_fd);
    return 0;
}
