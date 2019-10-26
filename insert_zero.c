#include<stdio.h>
  int main()
  {
    int i,k,n;
    printf("Enter size of array=");
    scanf("%d",&n);
    i=2*n;
    float a[i];
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=n;i>0;i--)
    {
      k=2*n;
      a[k]=a[i];
    }
    for(i=1;i<2*n;i=i+2)
    {
      a[i]=0;
      k=2*n;
    }
    for(i=0;i<k-1;i++)
    {
      printf("%f\n"a[i]);
    }
    return 0;
  }
