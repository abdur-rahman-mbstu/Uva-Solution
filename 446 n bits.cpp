#include<bits/stdc++.h>
using namespace std;
long long decimal(char st[], long long ll)
{
    long long k=0,nn=0,i;
    for(i=ll-1; i>=0; i--)
    {
        if(st[i]>=65&&st[i]<=70)
            st[i]=st[i]-55;
        else
            st[i]=st[i]-48;
        nn=nn+st[i]*pow(16,k);
        k++;
    }
    return nn;
}
int main()
{
    char st[10],st1[10],c;
    long long n,m,i,j,p,q,a,b,arr[20],rem,arr1[20],s,T;
    cin>>T;
    getchar();
    while(T--)
    {
        scanf("%s %c %s",st,&c,st1);
        j=0;
        s=0;
        p=strlen(st);
        q=strlen(st1);
        n=decimal(st,p);
        m=decimal(st1,q);
        a=n;
        b=m;
        while(n!=0)
        {
            rem=n%2;
            n/=2;
            arr[j++]=rem;
        }
        for(i=0; i<13-j; i++)
            cout<<"0";
        for(i=j-1; i>=0; i--)
            cout<<arr[i];
        printf(" %c ",c);
        while(m!=0)
        {
            rem=m%2;
            m/=2;
            arr1[s++]=rem;
        }
        for(i=0; i<13-s; i++)
            cout<<"0";
        for(i=s-1; i>=0; i--)
            cout<<arr1[i];
        if(c=='+')
            cout<<" = "<<a+b<<endl;
        else
            cout<<" = "<<a-b<<endl;
    }
    return 0;
}
