#include<bits/stdc++.h>
using namespace std;
int fib[5000][1008];
void fibo()
{
    int i,j,ca;
    fib[1][0]=1;
    fib[2][0]=1;
    for(i=3; i<5000; i++)
    {
        ca=0;
        for(j=0; j<1005; j++)
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
        for(p=1004; p>=0; p--)
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
