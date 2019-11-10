#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<fcntl.h>
#include<sys/stat.h>

int main()
{
    int fd;
    int len;
    char buf[1024];

    mkfifo("temp", 0666);
    fd = open("temp", O_RDONLY);

    while((len = read(fd, buf, 1024)) > 0) // 读取FIFO管道
        printf("Read message2: %s", buf);

    close(fd);  // 关闭FIFO文件
    return 0;
}

