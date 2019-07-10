#include<bits/stdc++.h>
using namespace std;
int a[25],mx,j,dp[21][4002];
int fun(int pos, int tt)
{
    int p=0,q=0;
    if(dp[pos][tt]!=-1) return dp[pos][tt];
    if(pos==j)
    {
        if(tt==mx) return 1;
        return 0;
    }
    if(tt+a[pos]<=mx) p = fun(pos+1,tt+a[pos]);
    q = fun(pos+1,tt);
    return dp[pos][tt]=p+q;
}
int main()
{
    string s;
    int n,m,i,T,sz,sm;
    cin>>T;
    getchar();
    while(T--)
    {
        memset(dp,-1,sizeof(dp));
        j=0;n=0;sm=0;
        getline(cin,s);
        sz = s.size();
        for(i=0;i<sz;i++)
        {
            if(isdigit(s[i])) n = n*10+s[i]-'0';
            else
            {
                a[j++]=n;
                sm+=n;
                n=0;
            }
        }
        a[j++]=n;
        sm+=n;
        if(sm&1) cout<<"NO"<<endl;
        else
        {
            mx = sm/2;
            if(fun(0,0)==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}
