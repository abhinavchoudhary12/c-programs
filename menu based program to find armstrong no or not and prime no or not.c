#include<stdio.h>  
#include <string.h>    
int main()
{
    int n;
    printf("**************************\n");
    printf("***To Find Armstrong no***\n");
    printf("***    and Prime no    ***\n");
    printf("**************************\n");
    printf("1. armstrong number:\n");
    printf("2. prime number:\n");
    printf("2. Exit:\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
    int i,n,a;
    int armstrong(int);
    printf("enter the no: ");
    scanf("%d",&n);
    
    a=armstrong(n);
    if(a==1)
    printf("it is a armstrong number");
    else
    printf("it is not an armstrong number "); 
    }
     break;
     case 2:
    {
    int i,n,count=0;
    printf("enter the no: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("no is prime");
    else
    printf("no is not prime");
    }
    break;
    case 3:
    
    break;
    return 0;
    }
    
 }
int armstrong(int n)
{
    int i,q,rem,count=0,fact=1,result=0;
    
    q=n;
    while(q!=0)
    {
        q=q/10;
        count++;
    
    }
    q=n;
    while(q!=0)
    {
        rem=q%10;
        for(i=1;i<=count;i++)
        {
            fact=fact*rem;
        }
        
        q=q/10;
        result=result+fact;
        fact=1;
    }
    if(result==n)
    return 1;
    else
    return 0;
}
