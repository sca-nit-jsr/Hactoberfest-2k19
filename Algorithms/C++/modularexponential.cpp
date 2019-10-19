#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x,ll y)
{
    ll z=1;
    while(y>0)
    {
        if(y&1)
        {
            z=(z*x)%mod;
        }
        x=(x*x)%mod;
        y/=2;
    }
    return z;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    cout<<power(n,m)<<endl;
}
