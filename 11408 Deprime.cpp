#include<bits/stdc++.h>
using namespace std;
#define mx 5000005
int status[(mx/32)+2],a[500000],a1[850000],k=0,u=0;
bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
void sieve()
{
    int i, j, sqrtN;
    sqrtN = int( sqrt( mx ) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= mx; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }
    a[k++]=2;
    for(i=3; i<=mx; i+=2)
        if(Check(status[i>>5],i&31)==0)
            a[k++]=i;
            //cout<<k<<endl;
    a1[u++]=2;
    for(i=3; i<=mx; i++)
    {
        if(i&1)
        {
            if(Check(status[i>>5],i&31)==0)
            {
                a1[u++]=i;
                continue;
            }
        }
        int sum=0,n=i;
        for(j=0; a[j]*a[j]<=n; j++)
        {
            if(n%a[j]==0)
            {
                while(n%a[j]==0)
                    n/=a[j];
                sum+=a[j];
            }
            if(n==1) break;
        }
        if(n!=1) sum+=n;
        if(sum&1||sum==2)
        {
            if(Check(status[sum>>5],sum&31)==0) a1[u++]=i;
        }
    }
}
int main()
{
    sieve();
    int a,b,low,up;
    while(scanf("%d",&a)==1)
    {
        if(a==0) break;
        scanf("%d",&b);
        up=upper_bound(a1,a1+u,b)-a1;
        low=lower_bound(a1,a1+u,a)-a1;
        printf("%d\n",up-low);
    }
    return 0;
}

