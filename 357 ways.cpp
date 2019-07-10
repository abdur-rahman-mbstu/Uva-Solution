#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll coin[]= {1,5,10,25,50},dp[6][30002],tar,a[30004];
ll fun(ll pos,ll tot)
{
    ll rt=0,rt1=0;
    if(pos>=5)
    {
        if(tot==0) return 1;
        return 0;
    }
    if(dp[pos][tot]!=-1) return dp[pos][tot];
    if(tot-coin[pos]>=0) rt=fun(pos,tot-coin[pos]);
    rt1=fun(pos+1,tot);
    return dp[pos][tot]=rt+rt1;
}

void cal()
{
    ll p;
    for(ll i=0; i<=30000; i++)
        a[i]=fun(0,i);
}
int main()
{
    ll ans,n;
    memset(dp,-1,sizeof(dp));
    cal();
    while(scanf("%lld",&n)==1)
    {
        ans=a[n];
        if(ans>1) printf("There are %lld ways to produce %lld cents change.\n",ans,n);
        else printf("There is only %lld way to produce %lld cents change.\n",ans,n);
    }
    return 0;
}
