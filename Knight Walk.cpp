#include <iostream>
using namespace std;

bool inside(int a,int b,int n,int m)
{
    if(a>=0 && a<n && b>=0 && b<m)
        return true;
    return false;
}
bool isend(pair<int,int> p)
{
    if(p.first==-1 && p.second==-1)
        return true;
    return false;
}
int moves(int n,int m, int s1, int s2,int d1,int d2){
    if(s1>n || s2>m || d1>n || d2>m )
    return -2;
    if(s1==d1 && s2==d2)
    return -1;
    int flag=0,count=0;
    queue <pair<int,int>> q;
    vector<vector<bool>> visited(n,vector<bool>(m));
    vector <pair<int,int>> dir{{2,1},{-2,1},{-2,-1},{2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
    q.push(make_pair(s1-1,s2-1));
    visited[s1-1][s2-1]=true;
    q.push(make_pair(-1,-1));
    
    while(!q.empty())
    {
        if(isend(q.front()))
        {
            if(flag==1){
	            q.pop();
	            q.push(make_pair(-1,-1));
	            count++;
               flag=0;}
	       else q.pop();
	       continue;
        }
        pair<int,int> p = q.front();
        q.pop();
	    for(pair<int,int> dr : dir)
	    {
	        int n_i = p.first + dr.first;
	        int n_j = p.second + dr.second;
	        if(inside(n_i,n_j,n,m) && n_i==d1-1 && n_j==d2-1 && visited[n_i][n_j]==false)
	        return count;
	        else if(inside(n_i,n_j,n,m) && visited[n_i][n_j]==false)
	        {
	            q.push(make_pair(n_i,n_j));
	            visited[n_i][n_j]=true;
	            flag =1;
	        }
	    }
    }
    return -2;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, m,s1,s2,d1,d2;
	    cin>>n>>m;
	    cin>>s1>>s2>>d1>>d2;
	   
	    cout<<moves(n,m,s1,s2,d1,d2) +1<<endl;
	}
	return 0;
}
