/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
int up,lo;
int d,i,j,n,l,rem,rem1,up1,temp=0,count=0,count1=0;

scanf("%d",&up);
scanf("%d",&lo);
scanf("%d",&d);
l=lo-up;
n=lo;
while(n!=0)
{
    count++;
    n/=10;
}

for(i=0;i<l;i++)
{
        up1=up;
        while(up1!=0)
        {
        rem=up1%10;
        temp+=rem;
        up1=up1/10;
        rem1=up1%10;
        if(rem1>temp && rem!=d)
        {
            count1++;
        }
        }

       

    if(count1==count-1)
    {
        printf("%d ",up);
    }
 
       up1=up++;
       temp=0;
       count1=0;

}





return 0;
}
