#include<bits/stdc++.h>
using namespace std;
int a[2005],b[1005],n;
bool ans;
void solve(int sm, int cnt, int now)
{
    if(ans||now>2*n-1||cnt>n) return;
    if(cnt==n&&sm%n==0)
    {
        ans=1;
        cout<<"Yes"<<endl<<b[0];
        for(int i=1;i<n;i++) cout<<" "<<b[i]; cout<<endl;
    }
    b[cnt]=a[now];
    solve(sm+a[now],cnt+1,now+1);
    solve(sm,cnt,now+1);
    return;
}
int main()
{
    int p,q,i,j;
    while(cin>>n&&n)
    {
        ans=0;
        for(i=0; i<2*n-1; i++) cin>>a[i];
        solve(0,0,0);
        if(ans==0) cout<<"No"<<endl;
    }
    return 0;
}
