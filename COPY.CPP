#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp1,*fp2;
char c;
fp1=fopen("abhinav.txt","r");
fp2=fopen("abhinav2.txt","w");
if(fp1==NULL||fp2==NULL)
{
printf("no file open");
return;
}
while((c=fgetc(fp1))!=EOF)
{
fputc(c,fp2);
}
fclose(fp1);
fclose(fp2);
getch();
}