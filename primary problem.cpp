#include<bits/stdc++.h>
using namespace std;
#define mx 1000005
bool check[mx];
void prime()
{
    long i,j;
    for(i=3; i<=mx; i+=2)
        check[i]=true;
    for(i=3; i*i<=mx; i+=2)
    {
        if(check[i]==true)
        {
            for(j=i*i; j<=mx; j+=i+i)
                check[j]=false;
        }
    }
    check[2]=true;
}
int main()
{
    long n,i,j,p,q,l;
    while(scanf("%ld",&n)==1)
    {
        l=0;
        if(n==0)
            break;
        printf("%ld:\n",n);
        prime();
        if(check[n-2]==true)
        {
            printf("2+%ld\n",n-2);
            continue;
        }
        for(i=3; i<n; i+=2)
        {
            if(check[i]==true)
            {
                p=n-i;
                if(check[p]==true)
                {
                    printf("%ld+%ld\n",i,p);
                    l=1;
                    break;
                }
            }
        }
        if(l==0)
            printf("NO WAY!\n");
    }
    return 0;
}
