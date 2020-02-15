#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m;
    long long p=8,q,c=0;
    while(1)
    {
        n=sqrt((p*(p+1))/2);
        q=n;
        if(n==q)
        {
            printf("%10lld%10lld\n",q,p);
            c++;
        }
        p++;
        if(c==10) break;
    }
    return 0;
}
