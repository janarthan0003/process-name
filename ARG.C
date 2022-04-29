#include<stdio.h>
#include<conio.h>
int main()
{
printf("process ID: %d\n", getpid());
printf("parent process ID: %d\n", getppid());
return 0;
}