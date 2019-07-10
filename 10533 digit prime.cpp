#include<bits/stdc++.h>
#define mx 1000005
using namespace std;
bool check[mx];
long arr[mx],k=0;

long digit(long n)
{
    long rem,sum=0,i;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}

void prime()
{
    int i,j,p;
    for(i=3; i<=mx; i+=2) check[i]=true;
    for(i=3; i*i<=mx; i+=2)
    {
        if(check[i]==true)
        {
            for(j=i*i; j<=mx; j+=i+i)
                check[j]=false;
        }
    }
    check[1]=false;
    check[2]=true;
    arr[k++]=2;
    for(i=2; i<=mx; i++)
    {
        if(check[i]==true)
        {
            p=digit(i);
            if(check[p]==true) arr[k++]=i;
        }
    }
}


int main()
{
    prime();
    long n,m,T;
    cin>>T;
    while(T--)
    {
        cin>>m>>n;
        long up = upper_bound(arr,arr+k,n) - arr;
        long low = lower_bound(arr,arr+k,m) - arr;
        //cout<<up<<" "<<low<<endl;
        if(m<3)
            cout<<up-low-1<<endl;
        else
            cout<<up-low<<endl;
    }
    return 0;
}
