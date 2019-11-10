#include "stdio.h"
int main()
{
int *c = 0x7fff76eae8f4;
sleep(1);
printf("another %p\n",c);
return -1;
}
