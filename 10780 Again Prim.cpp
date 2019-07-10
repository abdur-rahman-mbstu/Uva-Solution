#include<bits/stdc++.h>
using namespace std;
int a[5000],k=0;
bool check[10005];
void sieve()
{
    int i,j;
    for(i=3; i<=10000; i+=2) check[i]=true;
    for(i=3; i<=100; i+=2)
    {
        if(check[i]==true)
        {
            for(j=i*i; j<=10000; j+=i+i) check[j]=false;
        }
    }
    a[k++]=2;
    for(i=3; i<=5000; i+=2)
    {
        if(check[i]==true) a[k++]=i;
    }
}
int main()
{
    //freopen("10780.txt","r",stdin);
    //freopen("10780 output.txt","w",stdout);
    sieve();
    int T,i,j,n,m,cnt[9975],fct[5000],mx,fmx,p,idx,fidx,q,mn,t=1;
    cin>>T;
    while(T--)
    {
        mx=0; fmx=0; mn=50000;
        memset(cnt,0,sizeof(cnt));
        memset(fct,0,sizeof(fct));
        cin>>m>>n;
        for(p=2; p<=n; p++)
        {
            q=p;
            for(i=0; a[i]*a[i]<=q; i++)
            {
                while(q%a[i]==0)
                {
                    cnt[a[i]]++;
                    q/=a[i];
                    if(a[i]>mx) mx=a[i];
                }
            }
            if(q!=0)
            {
                cnt[q]++;
                if(q>mx) mx=q;
            }
        }
        for(i=0; a[i]*a[i]<=m; i++)
        {
            while(m%a[i]==0)
            {
                fct[a[i]]++;
                m/=a[i];
                if(a[i]>fmx) fmx=a[i];
            }
        }
        if(m!=0)
        {
            fct[m]++;
            if(m>fmx) fmx=m;
        }
        fidx=upper_bound(a,a+k,fmx)-a;
        for(i=0; i<fidx; i++)
        {
            if(fct[a[i]]>0)
            {
                mn=min(mn,(cnt[a[i]]/fct[a[i]]));
            }
        }
        cout<<"Case "<<t++<<":"<<endl;
        if(mn>0) cout<<mn<<endl;
        else cout<<"Impossible to divide"<<endl;
    }
    return 0;
}

