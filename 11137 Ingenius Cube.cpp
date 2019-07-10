#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll coin[]= {1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261},
           dp[22][10004],tar,a[10005];
ll fun(ll pos,ll tot)
{
    ll rt=0,rt1=0;
    if(pos==21)
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
    for(ll i=0; i<=10000; i++)
        a[i]=fun(0,i);
}
int main()
{
    ll ans,n;
    memset(dp,-1,sizeof(dp));
    cal();
    while(scanf("%lld",&n)==1)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}
