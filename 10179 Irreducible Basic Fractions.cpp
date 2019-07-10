#include<bits/stdc++.h>
#define mx 31650
using namespace std;
bool check[mx+5];
long long a[mx+10],k=0;

void prime()
{
    long long i,j,n,p;
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
    a[k++]=2;
    for(i=3; i<=mx; i+=2)
    {
        if(check[i]==true)
            a[k++]=i;
    }
}
int main()
{
    prime();
    long long n,m,i,j,b[1000];
    while(cin>>n&&n)
    {
        m=n;
        j=0;
       /* if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }*/
        for(i=0; a[i]*a[i]<=n; i++)
        {
            if(n%a[i]==0)
            {
                while(n%a[i]==0)
                    n/=a[i];
                b[j++]=a[i];
            }
        }
        double d=1;
        if(n!=1)
            b[j++]=n;
        for(i=0; i<j; i++)
            d*=(b[i]-1.0)/b[i];
        printf("%.0lf\n",m*d);
    }
    return 0;
}
