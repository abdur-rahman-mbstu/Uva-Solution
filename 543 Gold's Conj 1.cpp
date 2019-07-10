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
        j=0;
        for(i=n-1;i>=3;i=i-2)
        {
            if(prime(i)==true)
            {
                p=n-i;
                if(prime(p)==true&&p%2==1)
                {
                    printf("%ld = %ld + %ld\n",n,p,i);
                    j=1;
                    break;
                }
            }
        }
        if(j==0)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
