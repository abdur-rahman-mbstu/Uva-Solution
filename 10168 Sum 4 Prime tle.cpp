#include<bits/stdc++.h>
using namespace std;
#define mx 10000002
int a[800000],k=0,n,p,b[1000];
bool check[10000003],ans;
void prime()
{
    int i,j;
    a[k++]=2;
    for(i=3; i<=mx; i+=2) check[i]=true;
    for(i=3; i*i<=mx; i+=2)
    {
        if(check[i]==true)
        {
            for(j=i*i; j<=mx; j+=i+i) check[j]=false;
        }
    }
    for(i=3; i<=mx; i+=2) if(check[i]==true) a[k++]=i;
    //cout<<k<<" "<<a[k-1]<<endl;
}
void fun(int sm, int cnt, int nw)
{
    int i;
    if(sm>n||cnt>4||nw>p||ans) return;
    if(cnt==4&&sm==n)
    {
        ans=1;
        cout<<b[0];
        for(i=1; i<4; i++) cout<<" "<<b[i];
        cout<<endl;
    }
    b[cnt]=a[nw];
    fun(sm+a[nw],cnt+1,nw);
    fun(sm,cnt,nw+1);
}
int main()
{
    prime();
    while(cin>>n)
    {
        ans=0;
        p=lower_bound(a,a+k,n)-a;
        fun(0,0,0);
        if(ans==0) cout<<"Impossible."<<endl;
    }
    return 0;
}
