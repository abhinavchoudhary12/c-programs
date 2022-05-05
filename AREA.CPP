#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
int l,b;
float area;
if(argc!=3)
{
printf("wrong argument");
exit(1);
}
l=atoi(argv[1]);
b=atoi(argv[2]);
area=l*b;
printf("area %d",area);

getch();
}