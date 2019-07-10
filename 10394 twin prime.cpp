#include<bits/stdc++.h>
#define mx 20000005
using namespace std;
bool check[mx];long arr[mx],arr1[mx];
void prime()
{
    long i,j,t=0;
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
    for(i=2;i<=mx;i++)
    {
        if(check[i]==true&&check[i+2]==true)
        {
            arr[t++]=i;
        }
    }
}
int main()
{
    prime();
    long i,n;
    while(cin>>n)
    {
        printf("(%ld, %ld)\n",arr[n-1],arr[n-1]+2);
    }
    return 0;
}
