#include<bits/stdc++.h>
#define mx 10000100
using namespace std;
bool check[mx+10];
long long arr[mx],arr1[mx+100];

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
    long long n,i,j,cn,m,ans;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n<0)
            n=-n;
        m=n;
        ans=0;
        cn=0;
        for(i=0; arr[i]*arr[i]<=n; i++)
        {
            if(n%arr[i]==0)
            {
                while(n%arr[i]==0)
                {
                    n=n/arr[i];
                }
                ans=arr[i];
                cn++;
            }
        }
        if(n!=1&&n>ans)
        {
            ans=n;
            cn++;
        }
        if(cn<=1)
            cout<<"-1"<<endl;
        else
        {
            if(ans==m||m==1)
                cout<<"-1"<<endl;
            else
                cout<<ans<<endl;
        }
    }
    return 0;
}
