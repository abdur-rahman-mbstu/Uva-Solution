#include<bits/stdc++.h>
#define mx 10005
using namespace std;
bool check[mx];
int arr[mx],k=0;

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
    arr[k++]=2;
    for(i=3; i<=mx; i+=2)
    {
        if(check[i]==true)
            arr[k++]=i;
    }
}
int main()
{
    int n,i,j,cc,p,up;
    prime();
    while(cin>>n)
    {
        cc=0;
        if(n==0)
            break;
        up=upper_bound(arr,arr+k,n)-arr;
        for(i=0; i<up; i++)
        {
            p=0;
            for(j=i; j<up; j++)
            {
                p+=arr[j];
                if(p==n)
                {
                    cc++;
                    break;
                }
                if(p>n)
                    break;
            }
        }
        cout<<cc<<endl;
    }
    return 0;
}
