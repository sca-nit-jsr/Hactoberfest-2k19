#include<stdio.h>
#include<string.h>
int main()
{
 char s1[20];
 int i,len,flag=0;
 scanf("%s",s1);
 len=strlen(s1);
 for(i=0;i<len;i++)
 {
   if(s1[i]!=s1[len-i-1]){
     flag=1;b
     break;
     }
    }
    if(flag)
    printf("not palindrome");
    else
    printf("Palindrome");
    return 0;
    }
