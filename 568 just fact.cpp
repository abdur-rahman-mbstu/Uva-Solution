#include<bits/stdc++.h>
using namespace std;
char f[1000005];
int fact[10005];
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
    {
        if(f[j]=='0') continue;
        else break;
    }
    fact[n]=f[j]-'0';
}

void fac()
{
    int p;
    strcpy(f,"1");
    for(p=2; p<=10000; p++)
        multply(p);
}

int main()
{
    int n,i;
    fact[0]=1;
    fact[1]=1;
    fac();
    while(cin>>n)
        printf("%5d -> %d\n",n,fact[n]);
    return 0;
}
