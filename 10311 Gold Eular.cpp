#include<bits/stdc++.h>
using namespace std;
#define mx 100000000
int status[(mx/32)+2],a[6000000],k=0;
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
    for(i=3; i<=mx; i+=2)
        if( Check(status[i>>5],i&31)==0)
            a[k++]=i;
}
int main()
{
    sieve();
    int n,i,j,p,q,lw_bnd,f;
    while(scanf("%d",&n)==1)
    {
        q=n-2;
        f=0;
        if(n&1&&q>1)
        {
            if(Check(status[q>>5],q&31)==0)  printf("%d is the sum of 2 and %d.\n",n,q);
            else printf("%d is not the sum of two primes!\n",n);
            continue;
        }
        lw_bnd=lower_bound(a,a+k,n/2)-a;
       // cout<<lw_bnd<<" "<<a[lw_bnd]<<endl;
        for(i=lw_bnd-1; i>=0; i--)
        {
            p=n-a[i];
            if(p&1)
            {
                if(Check(status[p>>5],p&31)==0)
                {
                    printf("%d is the sum of %d and %d.\n",n,a[i],p);
                    f=1;
                    break;
                }
            }
        }
        if(f==0) printf("%d is not the sum of two primes!\n",n);
    }
    return 0;
}
