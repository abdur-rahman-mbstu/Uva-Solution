#include<bits/stdc++.h>
using namespace std;
#define mx 1005
int status[(mx/32)+2],a[1000],k=0,b[1000005];
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
    int i, j, sqrtN,ret,nn,co,mv,mx1=0;
    sqrtN = int( sqrt( mx ) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= mx; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31);
            }
        }
    }
    a[k++]=2;
    for(i=3; i<=mx; i+=2) if( Check(status[i>>5],i&31)==0) a[k++]=i;
    for(i=4; i<=1000000; i+=2)
    {
        nn=i;
        ret=1;
        for(j=0; a[j]*a[j]<=nn; j++)
        {
            co=0;
            while(nn%a[j]==0)
            {
                co++;
                nn/=a[j];
            }
            ret*=(co+1);
        }
        if(nn!=1) ret*=2;
        if(ret>=mx1)
        {
            mx1=ret;
            mv=i;
        }
        b[i]=mv;
    }
}
int main()
{
   sieve();
   int T,n;
   scanf("%d",&T);
   while(T--)
   {
       scanf("%d",&n);
       if(n<4) cout<<n<<endl;
       else
       {
           if(n&1) cout<<b[n-1]<<endl;
           else cout<<b[n]<<endl;
       }
   }
   return 0;
}
