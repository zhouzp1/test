#include<stdio.h>
#include<unistd.h>

int main()
{
    int fd[2];  // 两个文件描述符
    pid_t pid;
    char buff[20];
    pipe(fd);
    write(fd[1], "hello world\n", 12);
    close(fd[1]); // 关闭写端
    read(fd[0], buff, 20);
    printf("%s", buff);
    while(1);
    return 0;
}
