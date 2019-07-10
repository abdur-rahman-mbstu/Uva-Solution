#include<bits/stdc++.h>
using namespace std;
long cost[1002],pos,twe,we[1002],m,n,dp[1002][51];
int fun(long pos,long twe)
{
    if(pos==n) return 0;
    int pro=0,pro1=0;
    if(dp[pos][twe]!=-1) return dp[pos][twe];
    if(twe+we[pos]<=m) pro=cost[pos]+fun(pos+1,twe+we[pos]);
    pro1=fun(pos+1,twe);
    return dp[pos][twe]=max(pro,pro1);
}
int main()
{
    int i,p,T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        long sm=0;
        for(i=0; i<n; i++)
            cin>>cost[i]>>we[i];
        cin>>p;
        for(i=0; i<p; i++)
        {
            memset(dp,-1,sizeof(dp));
            cin>>m;
            sm+=fun(0,0);
        }
        cout<<sm<<endl;
    }
    return 0;
}

