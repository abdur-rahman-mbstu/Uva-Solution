#include<stdio.h>
long long square(long long n)
{
    return n*n;
}
long long bigmod(long long b,long long p,long  long m)
{
    if(p==0) return 1;
    else if(p%2==0) return square(bigmod(b,p/2,m))%m;
    else return ((b % m)*bigmod(b,p-1,m))%m;
}
main()
{
    long long b,p,m,a,i;
    while(scanf("%lld%lld%lld",&b,&p,&m)==3)
    {
        a=bigmod(b,p,m);
        printf("%lld\n",a);
    }
    return 0;
}
