#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int min(int x, int y, int z)
{
   return min(min(x, y), z);
}

int max(int x, int y, int z)
{
   return max(max(x, y), z);
}

int ed(string s1,string s2,int m,int n)
{
   int dp[m+1][n+1];
   for(int i = 0;i<=m;i++)
   {
     for(int j = 0;j<=n;j++)
     {
       if(i == 0)
         dp[i][j] = j;
       else if(j==0)
         dp[i][j] = i;
       else if(s1[i-1] == s2[j-1])
          dp[i][j] = dp[i-1][j-1];
       else{
         dp[i][j] = 1+ min(dp[i-1][j],dp[i-1][j-1],dp[i][j-1]);
       }
       cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
     }
   }
   return dp[m][n];
   /*if(n==0)
      return m;
   if(m==0)
      return n;
   if(s1[m-1] == s2[n-1])
      return ed(s1,s2,m-1,n-1);
   else
   {
     return (1 + min(ed(s1,s2,m-1,n),ed(s1,s2,m,n-1),ed(s1,s2,m-1,n-1)));
   }*/

}

int main()
{
  string s1 = "saturday",s2= "sunday";
  int m,n;
  m = s1.length();
  n = s2.length();
  cout<<ed(s1,s2,m,n);


}
