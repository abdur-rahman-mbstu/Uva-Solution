#include<bits/stdc++.h>
#define mx 1000000
using namespace std;
bool check[mx];
long long arr[mx+10],a[9999999],p,co=0;

void prime()
{
    long long i,j;
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
    for(i=2; i<=mx; i++)
    {
        p=i;
        for(j=0; arr[j]*arr[j]<=p; j++)
        {
            while(p%arr[j]==0)
            {
                co++;
                p=p/arr[j];
            }
            if(p==1) break;
        }
        if(p!=1) co++;
        a[i]=co;
    }
}
int main()
{
    prime();
    long n,i,j,m,p,q;
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}
