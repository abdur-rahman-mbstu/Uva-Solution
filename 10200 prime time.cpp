#include<bits/stdc++.h>
#define mx 10200
using namespace std;
bool check[mx+5];
long long arr[mx+5],a[mx+10],k=0,s=0;

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
    check[2]=true;
    long long k=0;
    arr[k++]=2;
    for(i=3; i<=mx; i+=2)
    {
        if(check[i]==true)
            arr[k++]=i;
    }
    for(i=0; i<=10000; i++)
    {
        n=i;
        p=n*n+n+41;
        if(p<10200)
        {
            if(check[p]==true)
                a[s++]=n;
        }
        else
        {
            int q=0;
            for(j=0; arr[j]*arr[j]<=p; j++)
            {
                if(p%arr[j]==0)
                {
                    q=1;
                    break;
                }
            }
            if(q==0)
                a[s++]=n;
        }
    }
    //for(i=9900;i<=10000;i++)
        //cout<<a[4148]<<" ";
}
int main()
{
    prime();
    long long n,m,low,up;
    double per,d,e;
    while(cin>>n>>m)
    {
        low=lower_bound(a,a+s,n)-a;
        up=upper_bound(a,a+s,m)-a;
        d=up-low; e=m-n+1;
        per=((d/e)*100.0)+1e-8;
        //cout<<up<<" "<<low<<endl;
        printf("%.2lf\n",per);
    }
    return 0;
}
