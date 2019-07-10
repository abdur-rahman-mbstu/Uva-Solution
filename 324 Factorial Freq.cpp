#include<bits/stdc++.h>
using namespace std;
char f[800],fact[400][800];
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
    for(p=2; p<=366; p++)
        multply(p);
}

int main()
{
    int n,i,ll,cnt[15];
    fact[1][0]='1';
    fac();
    while(cin>>n&&n)
    {
        memset(cnt,0,sizeof(cnt));
        ll=strlen(fact[n]);
        cout<<n<<"! --"<<endl;
        for(i=ll-1; i>=0; i--)
            cnt[fact[n][i]-'0']++;
        for(i=0; i<10; i++)
        {
            if(i==0&&i==5) printf("   (%d)%5d",i,cnt[i]);
            else printf("    (%d)%5d",i,cnt[i]);
            if(i==4||i==9)
                cout<<endl;
        }
    }
    return 0;
}
