#include<bits/stdc++.h>
using namespace std;
char f[10005],fact[1005][10005];
int a[10000],k=0;
void multply(int n)
{
    int mul,ca=0,i,j,LL;
    LL=strlen(f);
    for(i=0; i<LL; i++)
    {
        mul=(f[i]-'0')*n+ca;
        f[i]=(mul%10)+'0';
        ca=mul/10;
    }
    while(ca!=0)
    {
        f[i]=(ca%10)+'0';
        ca/=10;
        i++;
    }
    f[i]='\0';
    for(j=0; j<i; j++)
        fact[n][j]=f[j];
    fact[n][j]='\0';
}

void fac()
{
    int p;
    strcpy(f,"1");
    for(p=2; p<=1000; p++)
        multply(p);
}

int main()
{
    int n,i,ll,sum;
    fact[0][0]='1';
    fact[1][0]='1';
    fac();
    while(cin>>n)
    {
        sum=0;
        ll=strlen(fact[n]);
        for(i=0; i<ll; i++)
            sum+=fact[n][i]-'0';
        cout<<sum<<endl;
    }
    return 0;
}
