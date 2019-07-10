#include<bits/stdc++.h>
using namespace std;
long long power(int b, int p)
{
    long long a=1;
    for(int i=1;i<=p;i++) a*=b;
    return a;
}
long long decimal(char str[],int ll,int p)
{
    int k=0,i;
    double nn=0;
    for(i=ll-1; i>=0; i--)
    {
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]-55;
        else
            str[i]=str[i]-48;
        nn=nn+str[i]*power(p,k);
        k++;
    }
    return nn;
}

int main()
{
    //freopen("343in.txt","r",stdin);
    //freopen("343out.txt","w",stdout);
    char s[105],s2[105],s1[105],s3[105];
    long long n,a[100],b[100];
    while(~scanf("%s %s",s,s1))
    {
        int mx=0,mx1=0,i,j,ll,LL;
        ll=strlen(s);
        LL=strlen(s1);
        for(i=0;i<ll;i++)
        {
            if(s[i]<60)
            {
                if(s[i]-'0'>mx) mx=s[i]-'0';
            }
            else
            {
                if(s[i]-55>mx) mx=s[i]-55;
            }
        }
        for(i=0;i<LL;i++)
        {
            if(s1[i]<60)
            {
                if(s1[i]-'0'>mx1) mx1=s1[i]-'0';
            }
            else
            {
                if(s1[i]-55>mx1) mx1=s1[i]-55;
            }
        }
        if(mx==0) mx=1;
        if(mx1==0) mx1=1;

        for(i=mx+1; i<=36; i++)
        {
            for(j=0;j<ll;j++) s2[j]=s[j]; s2[j]='\0';
            a[i]=decimal(s2,ll,i);
        }

        for(i=mx1+1; i<=36; i++)
        {
            //strcpy(s3,s1);
            for(j=0;j<LL;j++) s3[j]=s1[j]; s3[j]='\0';
            b[i]=decimal(s3,LL,i);
        }
        /*cout<<mx<<" "<<mx1<<endl;
        for(i=mx+1; i<=36; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(i=mx1+1; i<=36; i++)
        { cout<<b[i];
            cout<<" ";
        }
        cout<<endl;*/
        int kk=0;
        for(i=mx+1; i<=36; i++)
        {
            for(j=mx1+1; j<=36; j++)
            {
                if(a[i]==b[j])
                {
                    //cout<<i<<" "<<j<<endl;
                    printf("%s (base %d) = %s (base %d)\n",s,i,s1,j);
                    kk=1;
                    break;
                }
            }
            if(kk==1) break;
        }
        if(kk!=1) printf("%s is not equal to %s in any base 2..36\n",s,s1);
    }
    return 0;
}

