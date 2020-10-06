#include<iostream>
using namespace std;
int main()
{
int c=0;
int n;
cout<<"number";
cin>>n;
int i=n+1;
while(i)
{
int j=2;
while(j<i)
{
           if(i%j==0)
           {
           c=c+1;
           }
           j=j+1;

}
if(c==2){
    cout<<i;
    break;
}

}
i=i+1;
return 0;
}
