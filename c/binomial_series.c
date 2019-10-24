#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,t;
    float s=0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the no. of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    t=pow(x,i)/fact(i);
    s=s+(-1)*t;
    printf("%d",s);
    return 0;
}
int fact(int i)
{
    int
    f,j,n=10;
    for(j=1;j<=n;j++)
        f=f*j;
    printf("%d",f);
    return f;
}
