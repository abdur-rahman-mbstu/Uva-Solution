#include<bits/stdc++.h>
using namespace std;
int n,t,w,wt[33],k,vl[33],b[32],dir[32][1002],dp[32][1002];
int fun(int pos, int tt)
{
    if(pos==n) return 0;
    if(dp[pos][tt]!=-1) return dp[pos][tt];
    int p=0,q=0;
    if(tt+3*w*wt[pos]<=t) p = vl[pos]+fun(pos+1,tt+3*w*wt[pos]);
    q = fun(pos+1,tt);
    //cout<<p<<" "<<q<<endl;
    if(p>q)
    {
        dir[pos][tt]=1;
        dp[pos][tt]=p;
    }
    else
    {
        dir[pos][tt]=2;
        dp[pos][tt]=q;
    }
    return dp[pos][tt];
}
void print(int pos, int tt)
{
    if(dir[pos][tt]==-1) return;
    if(dir[pos][tt]==1)
    {
        b[k++]=pos;
        print(pos+1,tt+3*w*wt[pos]);
    }
    else print(pos+1,tt);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    int m,i,j,kk=0;
    while(cin>>t>>w)
    {
        if(kk==1) cout<<endl; kk=1;
        k=0;
        memset(dir,-1,sizeof(dir));
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(i=0; i<n; i++) cin>>wt[i]>>vl[i];
        cout<<fun(0,0)<<endl;
        print(0,0);
        cout<<k<<endl;
        for(i=0;i<k;i++) cout<<wt[b[i]]<<" "<<vl[b[i]]<<endl;
    }
    return 0;
}
