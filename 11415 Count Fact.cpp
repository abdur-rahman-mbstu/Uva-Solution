#include<bits/stdc++.h>
#define mx 3200
#define mx1 10000000
using namespace std;
bool check[mx1];
int arr[mx],a[mx1],p,co=0;

void prime()
{
    int i,j;
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
    int k=0;
    arr[k++]=2;
    for(i=3; i<=mx; i+=2) if(check[i]==true) arr[k++]=i;
    for(i=2; i<=2703665; i++)
    {
        p=i;
        for(j=0; arr[j]*arr[j]<=p; j++)
        {
            while(p%arr[j]==0)
            {
                co++;
                p=p/arr[j];
            }
            if(p==1)
                break;
        }
        if(p!=1)
            co++;
        a[i]=co;
    }
    a[1]=0;
}
int main()
{
    prime();
    int n,i,j,cnt,T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        cnt=0;
        for(i=1; i<=mx1; i++)
        {
            if(a[i]<=n) cnt++;
            else break;
        }
        cout<<cnt+1<<endl;
    }
    return 0;
}
