#include<stdio.h>
#include<string.h>
void reverse(char*);
int main()
{
    FILE *p,*q; int ch; char name[10],c;
    do
    {
        printf("\n1.Create a file\n2.Reverse all word\n3.Print a file\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter file name: ");
            fflush(stdin);
            p=fopen(gets(name),"w");
            printf("\nWrite here:\n");
            while(((char)putc(getchar(),p))!=EOF);
            fclose(p);
            break;
        case 2:
            printf("\nEnter file name: ");
            fflush(stdin);
            gets(name);
            reverse(name);
            break;
        case 3:
            printf("\nEnter file name: ");
            fflush(stdin);
            p=fopen(gets(name),"r");
            while((c=getc(p))!=EOF)
                printf("%c",c);
            fclose(p);
            break;
        case 4:
            return;
        default:
            printf("\nWrong Choice");
        }
    }while(1);
}
void reverse(char *name)
{
    FILE *p=fopen(name,"r"),*q; int i; char str[10],c;
    if(!p)
    {
        printf("\nFile Does Not Exist");
        return;
    }
    q=fopen("temp.txt","w");
    c=getc(p);
    while(c!=EOF)
    {
        i=0;
        do
        {
            if(c==' ' || c==',' || c=='.' ||c=='\n')
                break;
            else
                str[i++]=c;
            c=getc(p);
        }while(1);
        str[i]='\0';
        fputs(strrev(str),q);
        putc(c,q);
        c=getc(p);
    }
    fclose(p);
    fclose(q);
    remove(name);
    rename("temp.txt",name);

}
