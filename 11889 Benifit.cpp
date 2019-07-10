#include<bits/stdc++.h>
using namespace std;
#define mx 10000000
int status[(mx/32)+2],a[700000],k=0;
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
    //cout<<k<<endl;
}
int power(int n, int p)
{
    int ans=1;
    for(int i=1;i<=p;i++) ans*=n;
    return ans;
}
int fact(int an,int lcm)
{
    int aa[1000],lm[1000],i,j=0,p=0,c=0,ans=1,cn,cn2;
    for(i=0; a[i]*a[i]<=lcm; i++)
    {
        cn=0;cn2=0;
        while(an%a[i]==0)
        {
            aa[j++]=a[i];
            an/=a[i];cn++;
        }
        while(lcm%a[i]==0)
        {
            lm[p++]=a[i];
            lcm/=a[i];
            cn2++;
        }
        if(cn2>cn) ans*=power(a[i],cn2);
    }
    if(lcm!=1&&an==1) ans*=lcm;
    return ans;
}
int main()
{
    sieve();
    int an,lcm,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&an,&lcm);
        if(lcm%an!=0)
        {
            printf("NO SOLUTION\n");
            continue;
        }
        printf("%d\n",fact(an,lcm));
    }
    return 0;
}
