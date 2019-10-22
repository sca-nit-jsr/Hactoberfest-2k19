#include<stdio.h>


 
int main()


 
{


 
  int a[10],i,n,flag=0;


 
  printf("Enter array elements:");


 
  for(i=0;i<10;i++);


 
  {


 
    scanf("%d",&a[i]);


 
   }


 
   printf("Enter the element to be serched\n");


 
   scanf("%d",&n);


 
   for(i=0;i<10;i++)


 
   {


 
      if(a[i]==n)


 
        flag=1;


 
     }


 
     if(flag==1)


 
      printf("Element found");


 
      else


 
      printf("Not found");


 
     return 0;


 
    }
