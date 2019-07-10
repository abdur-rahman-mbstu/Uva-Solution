#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,m,p;
    while(cin>>n>>m)
    {
        p=__gcd(n,m);
        if(p==1)
            printf("%10ld%10ld    Good Choice\n",n,m);
        else
            printf("%10ld%10ld    Bad Choice\n",n,m);
        cout<<endl;
    }
    return 0;
}
