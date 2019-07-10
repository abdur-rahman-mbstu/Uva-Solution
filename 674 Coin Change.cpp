#include<bits/stdc++.h>
using namespace std;
int coin[]= {1,5,10,25,50},dp[6][7490],tar;
long a[7490];
int fun(int pos,int tot)
{
    long long rt=0,rt1=0;
    if(pos==5)
    {
        if(tot==tar) return 1;
        return 0;
    }
    if(dp[pos][tot]!=-1) return dp[pos][tot];
    if(coin[pos]+tot<=tar) rt=fun(pos,tot+coin[pos]);
    rt1=fun(pos+1,tot);
    return dp[pos][tot]=rt+rt1;
}
void cal()
{
    long p;
    for(int i=1; i<=7489; i++)
    {
        memset(dp,-1,sizeof(dp));
        tar=i;
        p=fun(0,0);
        a[i]=p;
    }
}
int main()
{
    cal();
    long long ans,n;
    while(scanf("%d",&n)==1)
    {
        printf("%ld\n",a[n]);
    }
    return 0;
}
