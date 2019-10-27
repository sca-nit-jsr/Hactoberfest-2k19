#include<stdio.h>
#include<math.h>
int main()
{
     int sum1=0,f,sum2=0;
    int a[100000],b[100000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n/2-1;i++)
    {
        int c=0,r,p=a[i];
        while(p)
        {
            r=n%10;
            p=p/10;
            c++;
        }
        b[i]=a[i]/pow(10,c-1);
    }

    for(i=n/2;i<n;i++)
    {
        f=a[i]%10;
        b[i]=f;
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum1+=b[i];
        }
        else
        {
            sum2+=b[i];
        }
    }
    if(sum1==sum2)
    {
        printf("OUI");
    }
    else
    {
        printf("NON");
    }
}
