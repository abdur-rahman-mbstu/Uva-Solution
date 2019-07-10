#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    long x;
    while(b!=0)
    {
        x=a%b;
        a=b;
        b=x;
    }
    return a;
}
int main()
{
    long long a,i,j,n,T,max,ans,k,arr[1000];
    char str[1000];
    cin>>T;
    getchar();
    while(T--)
    {
        n=0;
        max=0;
        int p=0;
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]!=' ')
            {
                n=n*10+str[i]-'0';
            }

            if(str[i]==' '||i==strlen(str)-1)
            {
                arr[p++]=n;
                n=0;
            }
        }
        for(i=0; i<p-1; i++)
        {
            for(j=i+1; j<p; j++)
            {
                ans=gcd(arr[i],arr[j]);
                if(ans>max)
                    max=ans;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
