#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rep1(i,a,n) for(int i=a;i<=n;i++)
#define pi pair<int,int>
#define pb push_back
#define mp make_pair
#define test int t; cin>>t; while(t--)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    test
    {
        map<char,int> mp;
        for(auto i='a'; i<='z';i++)
        {
            mp[i]++;
        }
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        } 
        vector<pair<char,int>> vec;
        copy(mp.begin(),mp.end(), back_inserter<vector<pair<char,int>>>(vec));
        
        sort(vec.begin(),vec.end(),
        [] (const pair<char,int> &l, const pair<char,int> &r)
        {
           if(l.second != r.second)
           return l.second < r.second;
           
           return l.first > r.first;
        });
        for(auto const &x : vec)
        cout<<x.first<<" ";
        cout<<"\n";  
    }
}
