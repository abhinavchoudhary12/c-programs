#include <stdio.h>

int main()
{
  int a[]={1,12,3,2,21,5};
  int i,j,pass,temp;
  for(pass=1;pass<6-1;pass++)
  {
      
      for(j=1;j<=6-pass;j++)
      {
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
      }
  }
  for(i=0;i<6;i++)
  {
  printf("%d ",a[i]);
  }
    return 0;
}
