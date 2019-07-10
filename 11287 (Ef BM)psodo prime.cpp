#include<bits/stdc++.h>
using namespace std;
bool check[100000];
long long a[35000],k=0;
long long Bigmod(long long a,long long b,long long n)
{
    long long c=0,d=1,k=0;
    long arr[70];
    while(b)
    {
        arr[k++]=b%2;
        b/=2;
    }
    while(k--)
    {
        //c=2*c;
        d=(d*d)%n;
        if(arr[k]==1)
        {
            //c=c+1;
            d=(d*a)%n;
        }
    }
    return d;
}

void prime()
{
    check[2]=0;
    int i,j,k=0,m;
    m=sqrt(31623);
    for(i=3; i<=31623; i+=2)
        check[i]=true;
    for(i=3; i<=m+1; i+=2)
    {
        if(check[i]==true)
        {
            for(j=i*i; j<=31623; j+=i+i)
                check[j]=false;
        }
    }
    a[k++]=2;
    for(i=3;i<=31623;i+=2) if(check[i]==true) a[k++]=i;
}
int main()
{
    prime();
    long long b,p,m,i,w,pp;
    while(scanf("%lld%lld",&p,&b)==2)
    {
        if(p==0&&b==0)  break;
        if(p<=31623)
        {
            if(check[p]==true)
            {
                cout<<"no"<<endl;
                continue;
            }
        }
        for(i=0;a[i]*a[i]<=p;i++)
        {
            w=p;
            if(p%a[i]==0)
            {
                p/=a[i];break;
            }
        }
        if(p==w)
        {
            cout<<"no"<<endl;
            continue;
        }
        pp=Bigmod(b,w,w);
        //cout<<pp<<endl;
        if(pp==b) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
