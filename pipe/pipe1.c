#include<stdio.h>
#include<unistd.h>

int main()
{
	int fd[2];
	char buff[20];
	printf("1\n");
	printf("2\n");
	printf("2.2\n");
	printf("2.5\n");
	printf("3\n");
	printf("4\n");
    read(fd[0], buff, 20);
    printf("5\n");
    printf("buff : %s", buff);
    return 0;
}
