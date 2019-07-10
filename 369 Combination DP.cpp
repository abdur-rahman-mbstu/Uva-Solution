#include<bits/stdc++.h>
using namespace std;
long long dp[105][105],n,r,i,p,j;
long long fun(long long n, long long r)
{
    if(r==1) return dp[n][1]=n;
    if(n==r) return dp[n][r]=1;
    if(dp[n][r]==0) dp[n][r]=fun(n-1,r)+fun(n-1,r-1);
    return dp[n][r];
}
int main()
{
    while(cin>>n>>r)
    {
        if(n==0&&r==0)
            break;
        fun(n,r);
        cout<<n<<" things taken "<<r<<" at a time is "<<dp[n][r]<<" exactly."<<endl;
    }
    return 0;
}
