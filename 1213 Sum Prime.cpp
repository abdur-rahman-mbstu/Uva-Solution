#include<bits/stdc++.h>
using namespace std;
#define mx 1122
int a[900],k=0,n,m,p;
long long dp[188][1121][15];
bool chk[mx];
void seive()
{
    int i,j;
    for(i=3;i<=mx;i+=2) chk[i]=1;
    for(i=3;i*i<=mx;i+=2)
    {
        if(chk[i])
        {
            for(j=i*i;j<=mx;j+=i+i) chk[j]=0;
        }
    }
    a[k++]=2;
    for(i=3;i<=mx;i+=2) if(chk[i]) a[k++]=i;
    //cout<<k<<endl;
}
long long fun(int pos, int sm, int cnt)
{
    long long pp=0,qq=0;
    if(dp[pos][sm][cnt]!=-1) return dp[pos][sm][cnt];
    if(cnt==m)
    {
        if(sm==n) return 1;
        return 0;
    }
    if(pos==p) return 0;
    if(sm+a[pos]<=n) pp = fun(pos+1,sm+a[pos],cnt+1);
    qq = fun(pos+1,sm,cnt);
    return dp[pos][sm][cnt] = pp+qq;
}
int main()
{
    seive();
    int i,j,q;
    while(cin>>n>>m)
    {
        if(n==0&&m==0) break;
        memset(dp,-1,sizeof(dp));
        p = upper_bound(a,a+k,n)-a;
        //cout<<p<<" "<<a[p]<<endl;
        cout<<fun(0,0,0)<<endl;
    }
}
