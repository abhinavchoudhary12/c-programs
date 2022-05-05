#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int i,gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"C:\\turboc3\\bgi");
    setbkcolor(BLUE);
    cleardevice();
    setcolor(RED);
    settextstyle(2,1,10);
    outtext("ABHINAV CHOUDHARY");
    for(i=1;i<=80;i++)
    {
     circle(320,240,i);
     rectangle(50,50,100,80);
     bar3d(100,100,100,400,10,5);
     arc(400,100,110,190,50);
    }
	getch();
	closegraph();
}
