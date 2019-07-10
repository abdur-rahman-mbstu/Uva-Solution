#include<bits/stdc++.h>
#define mx 1000000
using namespace std;
bool check[mx];
long long arr[mx];

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
}

int main()
{
    prime();
    long n,cn,i;
    while(cin>>n)
    {
        if(n==0)
            break;
        cn=0;
        cout<<n<<" : ";
        if(check[n]==true)
        {
            cout<<"1"<<endl;
            continue;
        }
        for(i=0;arr[i]<=n/2;i++)
        {
            if(n%arr[i]==0)
                cn++;
        }
        cout<<cn<<endl;
    }
    return 0;
}
