#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,d,a[202],dp[201][22][22];
ll fun(ll pos, ll sm, ll cnt)
{
    //cout<<pos<<" "<<sm<<" "<<cnt<<endl;
    ll p=0,q=0;
    if(sm<0) sm+=d;
    if(dp[pos][sm][cnt]!=-1) return dp[pos][sm][cnt];
    if(cnt==m)
    {
        if(sm==0) return 1;
        return 0;
    }
    if(pos==n) return 0;
    p = fun(pos+1,(sm+a[pos])%d,cnt+1);
    q = fun(pos+1,sm,cnt);
    return dp[pos][sm][cnt]=p+q;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll i,j,qry,t=1;
    while(cin>>n>>qry)
    {
        if(n==0&&qry==0) break;
        for(i=0; i<n; i++) cin>>a[i];
        cout<<"SET "<<t++<<":"<<endl;
        j=1;
        while(qry--)
        {
            memset(dp,-1,sizeof(dp));
            cin>>d>>m;
            cout<<"QUERY "<<j++<<": ";
            cout<<fun(0,0,0)<<endl;
        }
    }
    return 0;
}
