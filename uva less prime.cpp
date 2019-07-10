#include<bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
    int i;
    if(n==0||n==1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(i=3; i*i<=n; i+=2)
    {
        if(n%i==0&&i!=n)
            return false;
    }
    return true;
}
int main()
{
    long long i,T,j,n,m;
    cin>>T;
    while(T--)
    {
        cin>>n;
        if(n%2==0)
            n=n-1;
        else
            n=n-2;
        for(i=n;i>=1;i-=2)
            if(prime(i)==true)
        {
            printf("%lld\n",i);
            break;
        }
    }
    return 0;
}
