#include<bits/stdc++.h>
using namespace std;
char f[10005],fact[10005][10005];
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

void print(int p)
{
    int ll,i,j;
    ll=strlen(fact[p]);
    cout<<p<<"!"<<endl;
    for(i=ll-1; i>=0; i--)
        printf("%c",fact[p][i]);
    cout<<endl;
}

int main()
{
    int n,i;
    fact[0][0]='1';
    fact[1][0]='1';
    fac();
    while(cin>>n)
        print(n);
    return 0;
}
