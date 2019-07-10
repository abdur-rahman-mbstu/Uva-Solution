#include<bits/stdc++.h>
using namespace std;
string s,s1;
bool vis[101][101];
int dp[102][102],a[102],b[102],n,m;
int LCS(int i,int j)
{
    if(i==n||j==m) return 0;
    if(vis[i][j]) return dp[i][j];
    int ans=0;
    if(a[i]==b[j]) ans=1+LCS(i+1,j+1);
    else ans=max(LCS(i+1,j),LCS(i,j+1));
    vis[i][j]=1;
    return dp[i][j]=ans;
}
int main()
{
    int p,t=1;
    while(cin>>n>>m)
    {
        if(n==0&&m==0) break;
        for(p=0;p<n;p++) cin>>a[p];
        for(p=0;p<m;p++) cin>>b[p];
        memset(vis,0,sizeof(vis));
        printf("Twin Towers #%d\nNumber of Tiles : ",t++);
        cout<<LCS(0,0)<<endl<<endl;
    }
    return 0;
}
