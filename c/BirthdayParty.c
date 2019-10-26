#include<stdio.h>
int main()
{
 int t,n,m;
 scanf("%d",&t);
 while(t--)
 {
 scanf("%d",&n);
 scanf("%d",&m);
 if(m%n==0)
{
  printf("Yes\n");
}
else
{
  printf("No\n");
}
 }
}
