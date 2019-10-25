#include<stdio.h>
#define MAX 100
int main()
{
int arr[MAX],i,j,temp,n,xchange;
printf("enter a no of element:");
scanf("%d",&n);
for(i=0;i<n-1;i++)
{
xchange=0;
for(j=0;j<n-i;j++)
 {
  if(arr[j] > arr[j+1])
   {
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    xchange++;
   }
 }
 if(xchange==0)
  break;
}
printf("sorted list is:");
for(i=0;i<n;i++)
  printf("%d",arr[i]);
   printf("\n");
   return 0;
}
