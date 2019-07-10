#include<bits/stdc++.h>
using namespace std;

long long decimal(char str[],long long ll,long long p)
{
    long long k=0,i;
    double nn=0;
    for(i=ll-1; i>=0; i--)
    {
        if(str[i]>=65&&str[i]<=70)
            str[i]=str[i]-55;
        else
            str[i]=str[i]-48;
        nn=nn+str[i]*pow(p,k);
        k++;
    }
    return nn;
}

int main()
{
    char st[50],st2[100],st1[50];
    long long n,a,b,i,j,ll,nn,q,rem,p;
    while(~scanf("%s %lld %lld",st,&a,&b))
    {
        ll=strlen(st);
        q=0;
        nn=decimal(st,ll,a);
        if(nn==0) st2[q++]='0';
        while(nn!=0)
        {
            rem=nn%b;
            nn=nn/b;
            if(rem<10) st2[q++]=rem+48;
            else st2[q++]=rem+55;
        }
        if(q>7)
        {
            cout<<"  ERROR"<<endl;
            continue;
        }
        for(i=0; i<7-q; i++)
            cout<<" ";
        for(int i=q-1; i>=0; i--)
            printf("%c",st2[i]);
        cout<<endl;
    }
    return 0;
}
