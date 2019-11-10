#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <stdlib.h>
int main(void)
{
int fd;
fd=open("/dev/ttyS4",O_RDWR | O_NOCTTY | O_NONBLOCK);//O_NONBLOCK设置为非阻塞模式，在read时不会阻塞住，在读的时候将read放在while循环中，下一节篇文档将详细讲解阻塞和非阻塞
// printf("fd=%d\n",fd);
if(fd==-1)
{
perror("Can't Open SerialPort");
}
return fd;
}
