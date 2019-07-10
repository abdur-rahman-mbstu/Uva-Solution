#include<bits/stdc++.h>
#define mx 1000005
using namespace std;
bool check[mx+10];
long long arr[78505],arr1[78505];

void prime()
{
    long long i,j,k=0;
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
    arr[k++]=2;
    for(i=3; i<=mx; i+=2)
    {
        if(check[i]==true)
            arr[k++]=i;
    }
    arr[k++]=mx;
}

int main()
{
    prime();
    long long n,i,j,f;
    while(cin>>n)
    {
        if(n<0) break;
        f=0;
        for(i=0; arr[i]<=1000000; i++)
        {
            if(n%arr[i]==0)
            {
                while(n%arr[i]==0)
                {
                    n=n/arr[i];
                    arr1[f++]=arr[i];
                }
            }
        }
        if(n!=1) arr1[f++]=n;
        for(i=0;i<f;i++) printf("    %lld\n",arr1[i]);
        cout<<endl;
    }
    return 0;
}
