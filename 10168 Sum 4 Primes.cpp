#include<bits/stdc++.h>
using namespace std;
#define mx 10000002
bool check[10000002];
void prime()
{
    int i,j;
    check[2]=true;
    for(i=3; i<=mx; i+=2) check[i]=true;
    for(i=3; i*i<=mx; i++)
    {
        if(check[i]==true)
        {
            for(j=i*i; j<=mx; j+=i+i) check[j]=false;
        }
    }
}
void fun(int p)
{
    if(check[p-2])
    {
        cout<<" 2 "<<p-2;
        return;
    }
    for(int i=3; i<=p; i+=2)
    {
        if(check[p-i]&&check[i])
        {
            cout<<" "<<i<<" "<<p-i;
            return;
        }
    }
}
int main()
{
    prime();
    int n;
    while(cin>>n)
    {
        if(n<8)
        {
            cout<<"Impossible."<<endl;
            continue;
        }
        if(n&1)
        {
            cout<<"2 3";
            fun(n-5);
        }
        else
        {
            cout<<"2 2";
            fun(n-4);
        }
        cout<<endl;
    }
    return 0;
}
