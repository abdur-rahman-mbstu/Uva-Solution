#include<bits/stdc++.h>
using namespace std;
int fib[1005][255];
void fibo()
{
    int i,j,ca;
    fib[1][0]=2;
    fib[2][0]=3;
    for(i=3; i<=1000; i++)
    {
        ca=0;
        for(j=0; j<250; j++)
        {
            fib[i][j]=ca+fib[i-2][j]+fib[i-1][j];
            if(fib[i][j]>9)
            {
                ca=1;
                fib[i][j]=fib[i][j]%10;
            }
            else
                ca=0;
        }
    }
}
int main()
{
    fibo();
    int n,p;
    while(cin>>n)
    {
        int b=0;
        if(n==0)
        {
            cout<<"1"<<endl;
            continue;
        }
        for(p=249; p>=0; p--)
        {
            if(fib[n][p]==0&&b==0)
                continue;
            cout<<fib[n][p];
            b=1;
        }
        cout<<endl;
    }
    return 0;
}
