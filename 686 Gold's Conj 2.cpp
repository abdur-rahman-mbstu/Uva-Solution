#include<bits/stdc++.h>
using namespace std;
bool prime(long n)
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
    long n,i,j,p,d;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n==4)
        {
            cout<<"1"<<endl;
            continue;
        }
        j=0;
        for(i=3; i<=n; i=i+2)
        {
            if(prime(i)==true)
            {
                p=n-i;
                if(prime(p)==true&&p<=i)
                {
                    // cout<<i<<" "<<p<<" ";
                    j++;
                }
            }
        }
        printf("%ld\n",j);
    }
    return 0;
}
