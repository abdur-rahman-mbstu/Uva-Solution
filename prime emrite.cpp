#include<bits/stdc++.h>
using namespace std;
int prime(long long n)
{
    int i;
    if(n==0)
        return false;
    if(n==1||n==2)
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
long long reverse(long long m)
{
    long long rem,num=0,i;
    while(m!=0)
    {
        rem=m%10;
        num=num*10+rem;
        m=m/10;
    }
    return num;
}
int main()
{
    long long n,m;
    while(cin>>n)
    {
        m=reverse(n);
        if(prime(n)==true&&prime(m)==true&&m!=n)
            cout<<n<<" is emirp."<<endl;
        if(prime(n)==true&&prime(m)==true&&m==n)
            cout<<n<<" is prime."<<endl;
        if(prime(n)==true&&prime(m)!=true)
            cout<<n<<" is prime."<<endl;
        if(prime(n)==false)
            cout<<n<<" is not prime."<<endl;
    }
    return 0;
}
