#include<bits/stdc++.h>
using namespace std;
double power(int b, int p)
{
    double a=1;
    for(int i=1;i<=p;i++) a*=b;
    return a;
}
double decimal(int str[],int ll,int p)
{
    double nn=0;
    int i,k=0;
    //for(i=0;i<ll;i++) cout<<str[i]; cout<<endl;
    for(i=ll-1; i>=0; i--)
    {
        nn=nn+str[i]*power(p,k);
        k++;
    }
    return nn;
}

int main()
{
    char st[50];
    int s[50],i,ll,mx;
    unsigned long long p;
    double nn,mm;
    while(scanf("%s",st)==1)
    {
        mx=0;
        ll=strlen(st);
        if(st[0]=='0'&&ll==1) break;
        for(i=0; i<ll; i++)
        {
            s[i]=st[i]-'0';
            //cout<<s[i];
            if(s[i]>mx) mx=s[i];
        }
        for(i=mx+1; i<=100; i++)
        {
            nn=decimal(s,ll,i);
            mm=sqrt(nn);
            p=mm;
            //cout<<nn<<" "<<mm<<" "<<p<<endl;
            if(mm==p)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
