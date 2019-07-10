#include<bits/stdc++.h>
using namespace std;
string s,s1;
bool vis[1001][1001];
int dp[1002][1002];
int LCS(int i,int j)
{
    if(s[i]=='\0'||s1[j]=='\0') return 0;
    if(vis[i][j]) return dp[i][j];
    int ans=0;
    if(s[i]==s1[j]) ans=1+LCS(i+1,j+1);
    else ans=max(LCS(i+1,j),LCS(i,j+1));
    vis[i][j]=1;
    return dp[i][j]=ans;
}
int main()
{
    //int sz,sz1,i,j,p;
    while(getline(cin,s))
    {
        getline(cin,s1);
        memset(vis,0,sizeof(vis));
        cout<<LCS(0,0)<<endl;
    }
    return 0;
}
