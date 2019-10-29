#include <stdio.h>

int main()
{
    printf("Enter the String of which you want to find the sum\n");
    char str[100]; /* Declares a string of size 100 */
    int t,sum=0,i=0;
    scanf("%s",str);
    while(str[i]!='\0')
    {
      t+=str[i]-96;
    //  printf("%d",t);

      i++;
    }
    printf("%d",t);

  return 0;
}
