#include<bits/stdc++.h>
using namespace std;
int fib[5002][1050];
void fibo()
{
    int i,j,ca;
    fib[1][0]=1;
    fib[2][0]=1;
    for(i=3; i<=5000; i++)
    {
        ca=0;
        for(j=0; j<1050; j++)
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
        cout<<"The Fibonacci number for "<<n<<" is ";
        if(n==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        int b=0;
        for(p=1049; p>=0; p--)
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

