#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<ctype.h>
#include<algorithm>
#include<string>


using namespace std;


int main()
{
	int cnt=0,count=0,t=0;
     string s,ch;
	 cout<<"Press E for English and H for Hindi: ";
     cin>>s;
    
	cout<<"Player1 Tell movie name: "; 
    cin>>ch;
    
    
    transform(ch.begin(), ch.end(), ch.begin(), ::tolower);

     string a;
     
     cout<<"So Here we Go ! \n";
     cout<<endl;
     
    for(int i=0;i<ch.length();i++)
    {
    	if(ch[i]!='a' && ch[i]!='e'  && ch[i]!='i' &&ch[i]!='o' && ch[i]!='u')
    	{
    	  a[t]=ch[i];
    	  t++;
    	  ch[i]='_';
    	  
        }
        
    	cout<<ch[i];
	}
	cout<<endl;
	
int m=t;	
	
cout<<"\nPlayer2 Guess Movie Name\n";

int n=5;
while(n--)
{
	char c[m];
    int j=0;
    for(int i=0;i<t;i++)
    {
        cin>>c[i];
		if(c[i]==a[i])
		{
			j++;
		}
  	
	}
    	if(j==t)
		{
		  cout<<"Congratulations ! Player2 Win";	
		  return 0;
		}  
	
	  else if(n>0)
	  {
	  	
	  	cout<<"Try one more time\n";
	  	cout<<"You have "<<n<<"chances left\n";
	  }
	  
 
   }
   cout<<"Game Over\nPlayer1 Wins !!!";    
}
