#include<stdio.h>
#include<stdlib.h>   // exit
#include<fcntl.h>    // O_WRONLY
#include<sys/stat.h>
#include<time.h>     // time

int main()
{
    int fd;
    int n, i;
    char buf[1024];
    fd = open("temp", O_WRONLY); 
    for(i=0; i<10; ++i)
    {
        n=sprintf(buf,"hello,i am write\n");
	printf("i\n");
        write(fd, buf, n+1); 
        sleep(3);
    }
    close(fd);
}
