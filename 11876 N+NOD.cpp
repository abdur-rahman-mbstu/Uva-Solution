#include<bits/stdc++.h>
using namespace std;
#define mx 1020
int status[(mx/32)+2];
int b[1000005],dd[64800],a[1000],k=0,f=1;
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
    dd[0]=1;b[0]=0;//b[2]=2;
    for(i=1; i<=1000000; i+=1)
    {
       // cout<<i<<" ";
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
        b[i]=ret;
    }
    for(i=1;i<=64725;i++) dd[f++]=dd[i-1]+b[dd[i-1]];
    //cout<<dd[64725]<<" "<<endl;
}
int main()
{
   sieve();
   int T,n,up,lw,m,t;
   scanf("%d",&T);
   for(t=1;t<=T;t++)
   {
       scanf("%d%d",&m,&n);
       lw=lower_bound(dd,dd+f,m)-dd;
       up=upper_bound(dd,dd+f,n)-dd;
       //cout<<dd[up]<<" "<<dd[lw]<<endl;
       //cout<<up<<" "<<lw<<" "<<up-lw<<endl;
       printf("Case %d: %d\n",t,up-lw);
   }
   return 0;
}
