#include<stdio.h>
int main()
{
  int a[10];i;j,k;
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
        {
          k=a[i];
          for(j=i-1;j>=0&&k<a[j];j--)
          {
           a[j+1]=a[j];
           }
           a[j+1]=k;
          }
          for(i=0;i<ni++)
           printf("%d",a[i]);
           return 0;
          }
