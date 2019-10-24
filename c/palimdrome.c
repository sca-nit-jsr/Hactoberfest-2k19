#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    int i,flag=0,len;
    scanf("%s",s1);
    len=strlen(s1);
    for(i=0;i<len;i++)
    {
        if(s1[i]!=s1[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    printf("NO");
    else
    printf("YES");
    
    return 0;
}
