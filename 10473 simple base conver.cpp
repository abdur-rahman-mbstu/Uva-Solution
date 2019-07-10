#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10000];
    long long a[10000],i,j,nn,ll,p,q,rem;
    while(gets(str))
    {
        ll=strlen(str);
        if(str[0]=='-'&&ll==2)
            break;
        p=0;
        q=0;
        if(str[0]=='0'&&str[1]=='x')
        {
            int k=0;
            nn=0;
            for(i=ll-1; i>=2; i--)
            {
                if(str[i]>=65&&str[i]<=70)
                    str[i]=str[i]-55;
                else
                    str[i]=str[i]-48;
                nn=nn+str[i]*pow(16,k);
                k++;
            }
            printf("%lld\n",nn);
        }
        else
        {
            nn=0;
            q=0;
            for(i=0; i<ll; i++)
                nn=nn*10+str[i]-'0';
                if(nn==0)
                    a[q++]='0';
            while(nn!=0)
            {
                rem=nn%16;
                if(rem<=9)
                    a[q++]=rem+48;
                else
                    a[q++]=rem+55;
                nn=nn/16;
            }
            printf("0x");
            for(int j=q-1; j>=0; j--)
                printf("%c",a[j]);
            cout<<endl;
        }
    }
    return 0;
}
