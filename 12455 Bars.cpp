#include<bits/stdc++.h>
using namespace std;
int n,a[25],dp[22][1005],m;
int fun(int pos, int tt)
{
    int p=0,q=0;
    if(dp[pos][tt]!=-1) return dp[pos][tt];
    if(pos==m)
    {
        if(tt==n) return 1;
        return 0;
    }
    if(tt+a[pos]<=n) p = fun(pos+1,tt+a[pos]);
    q = fun(pos+1,tt);
    return dp[pos][tt] = p+q;
}
int main()
{
    int i,j,T;
    cin>>T;
    while(T--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n;
        cin>>m;
        for(i=0;i<m;i++) cin>>a[i];
        if(fun(0,0)==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
