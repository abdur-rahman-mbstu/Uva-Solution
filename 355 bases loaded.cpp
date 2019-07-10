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
    while(~scanf("%lld %lld %s",&a,&b,st))
    {
        strcpy(st1,st);
        int c=0;
        ll=strlen(st);
        for(i=0; i<ll; i++)
        {
            if((st[i]>=65&&st[i]<=70)||(st[i]>=48&&st[i]<=57))
            {
                if(st[i]>=65&&st[i]<=70)
                    p=st[i]-55;
                else
                    p=st[i]-48;
                if(p>=a)
                {
                    c=1;
                    break;
                }
            }
            else
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            printf("%s is an illegal base %lld number\n",st1,a);
            continue;
        }
        nn=0;
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
        printf("%s base %lld = ",st1,a);
        for(int i=q-1; i>=0; i--)
            printf("%c",st2[i]);
        printf(" base %lld\n",b);
    }
    return 0;
}
