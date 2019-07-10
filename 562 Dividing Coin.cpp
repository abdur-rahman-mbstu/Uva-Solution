#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll coin[102],pos,twe,ssm,n,dp[102][50002];
ll fun(ll pos,ll twe)
{
    if(pos>=n) return abs(twe-(ssm-twe));
    ll pro=0;
    if(dp[pos][twe]!=-1) return dp[pos][twe];
    pro=min(fun(pos+1,twe),fun(pos+1,twe+coin[pos]));
    return dp[pos][twe]=pro;
}
int main()
{
    ll i,p,T;
    cin>>T;
    while(T--)
    {
        ssm=0;
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>coin[i];
            ssm+=coin[i];
        }
        cout<<fun(0,0)<<endl;
    }
    return 0;
}
