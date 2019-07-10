#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[210],st1[210],st2[210],st3[210];
    int i,ll,LL,T,n,s,ar[210];
    cin>>T;
    getchar();
    while(T--)
    {
        int a=0,b=0,p=0,q=0,j=0,k=0,r,aa,bb,t,mm=0;
        scanf("%s %s",st,st1);
        ll=strlen(st);
        LL=strlen(st1);
        for(i=ll-1; i>=0; i--)
        {
            if(st[i]=='0'&&p==0)
                continue;
            st2[j++]=st[i];
            p=1;
        }
        for(i=LL-1; i>=0; i--)
        {
            if(st1[i]=='0'&&q==0)
                continue;
            st3[k++]=st1[i];
            q=1;
        }
        //cout<<j<<" "<<k<<endl;
        aa=j;
        bb=k;
        if(aa<bb)
            swap(aa,bb);
        for(i=0; i<aa; i++)
        {
            if((j-1-i)>=0)
                s=(st2[j-1-i]-'0');
            else
                s=0;
            if((k-1-i)>=0)
                t=(st3[k-1-i]-'0');
            else
                t=0;
            n=s+t+b;
            if(n>=10)
            {
                r=n%10;
                ar[a++]=r;
                b=1;
            }
            else
            {
                ar[a++]=n;
                b=0;
            }
        }
        if(b>0)
            ar[a++]=b;
        for(i=0; i<a; i++)
        {
            if(ar[i]==0&&mm==0)
                continue;
            cout<<ar[i];
            mm=1;
        }
        cout<<endl;
    }
    return 0;
}
