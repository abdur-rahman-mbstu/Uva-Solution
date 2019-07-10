#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll coin[]= {5,10,20,50,100,200,500,1000,2000,5000,10000},dp[13][10006],tar;
ll fun(ll pos,ll tot)
{
    ll rt=0,rt1=0;
    if(pos==11)
    {
        if(tot==0) return 1;
        return 0;
    }
    if(dp[pos][tot]!=-1) return dp[pos][tot];
    if(tot-coin[pos]>=0) rt=fun(pos,tot-coin[pos]);
    rt1=fun(pos+1,tot);
    return dp[pos][tot]=rt+rt1;
}

int main()
{
    ll ans;
    double n;
    memset(dp,-1,sizeof(dp));
    //cal();
    while(scanf("%lf",&n)==1)
    {
        if(n==0.0) break;
        tar=(n+1e-9)*100;
        //cout<<tar<<endl;
        ans=fun(0,tar);
        printf("%6.2lf%17lld\n",n,ans);
    }
    return 0;
}
