#include <iostream>
using namespace std;
int getnos(char n)
{
    if(n=='0'||n=='6'||n=='9')
    return 6;
    if(n=='8')
    return 7;
    if(n=='1')
    return 2;
    if(n=='7')
    return 3;
    if(n=='4')
    return 4;
    if(n=='2'||n=='3'||n=='5')
    return 5;
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int nos=0,no1,i=0;
	    char n[101];
	    cin>>n;
	    while(n[i])
	    {
	        nos+=getnos(n[i]);
	        i++;
	    }
	    if(nos%2==0)
	    {
	        for(i=0;i<nos/2;i++)
	            printf("1");
	        printf("\n");
	    }
	    else
	    {
	        printf("7");
	        for(i=0;i<nos/2-1;i++)
	            printf("1");
	        printf("\n");
	    }
	}
  }
