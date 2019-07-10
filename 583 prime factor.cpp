#include<bits/stdc++.h>
#define mx 65500
using namespace std;
bool check[mx];
long long arr[mx],arr1[mx+100];

void prime()
{
    long long i,j,t=0;
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
    long long k=0;
    arr[k++]=2;
    for(i=3; i<=mx; i+=2)
    {
        if(check[i]==true)
            arr[k++]=i;
    }
}
int main()
{
    prime();
    long long n,i,j,p,q;
    while(cin>>n)
    {
        if(n==0)
            break;
        q=n;
        p=0;
        if(n<0)
            n=-n;
        printf("%lld = ",q);
        for(i=0; arr[i]*arr[i]<=n; i++)
        {

            while(n%arr[i]==0)
            {
                arr1[p++]=arr[i];
                n=n/arr[i];
            }
            if(n==1)
                break;
        }
        if(n!=1)
        arr1[p++]=n;
        if(q<0)
        {
            printf("-1 ");
            for(i=0; i<p; i++)
            {
                if(i!=p-1)
                    printf("x %lld ",arr1[i]);
                else
                    printf("x %lld\n",arr1[i]);
            }
        }
        else
        {
            for(i=0; i<p; i++)
            {
                if(i!=p-1)
                    printf("%lld x ",arr1[i]);
                else
                    printf("%lld\n",arr1[i]);
            }
        }
    }
    return 0;
}
