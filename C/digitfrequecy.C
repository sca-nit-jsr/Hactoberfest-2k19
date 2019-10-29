#include<stdio.h>
#include<string.h>
int main()
{   
    int l,m=0;
    char s[1000];
    scanf("%s",s);
    l=strlen(s);
    int c[10];
    for(int i=0;i<=9;i++)
    c[i]=0;
    for(char k='0';k<='9';k++)
    {  
        for(int i=0;i<l;i++)
        {
            if(s[i]==k)
            c[m]=c[m]+1;
        }
        m++;
    }
    for(int i=0;i<=9;i++)
    printf("%d ",c[i]);
    return 0;
}
