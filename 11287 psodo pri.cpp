#include<bits/stdc++.h>
using namespace std;
#define mx 31624
bool check[mx];
long ar[mx],ww;
long long square(long long n)
{
    return n*n;
}
long long bigmod(long long b,long long p,long long m)
{
    if(p==0) return 1;
    else if(p%2==0) return square(bigmod(b,p/2,m))%m;
    else return ((b % m)*bigmod(b,p-1,m))%m;
}

void prime()
{
    long i,j,k=0;
    for(i=3; i<=mx; i+=2)
        check[i]=true;
    for(i=3; i<=sqrt(mx)+1; i+=2)
    {
        if(check[i]==true)
        {
            for(j=i*i; j<=mx; j+=i+i)
                check[j]=false;
        }
    }
    check[2]=true;
    ar[k++]=2;
    for(i=3; i<=mx; i++)
        if(check[i]==true)
            ar[k++]=i;
    // cout<<k<<endl;
}
int main()
{
    prime();
    long long b,p,m,a,i,yy,ss,q;
    while(scanf("%lld%lld",&p,&b)==2)
    {
        if(p==0&&b==0)  break;
        if(p<=mx)
        {
            if(check[p]==true)
            {
                cout<<"no"<<endl;
                continue;
            }
        }
        yy=p;
        for( ww=0; ar[ww]*ar[ww]<=p; ww++)
        {
            if(p%ar[ww]==0)
            {
                p/=ar[ww];
                break;
            }
        }
        if(p==yy)
        {
            cout<<"no"<<endl;
            continue;
        }
        a=bigmod(b,yy,yy);
        //cout<<a<<endl;
        if(a==b)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
