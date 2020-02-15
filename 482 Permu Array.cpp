#include<bits/stdc++.h>
using namespace std;
//double bb[1000],p;
int b[500000];
string s,s1,a[500000],bb[500000];
int main()
{
    int n,T,i,j,k,q,qq=0;
    char s2[10000];
    cin>>T;
    getchar();
    while(T--)
    {
        if(qq==1) cout<<endl; qq=1;
        getchar();
        int kk=0, k=0,q=0,j=0,n=0,sz,sz1,idx,mx=0;
        getline(cin,s);
        getline(cin,s1);
        sz=s.size();
        sz1=s1.size();
        s=s+' ';
        s1=s1+' ';
        for(i=0; i<=sz; i++)
        {
            if(s[i]==' ')
            {
                b[k++]=n;
                n=0;
            }
            else  n=n*10+(s[i]-'0');
        }
        for(i=0; i<=sz1; i++)
        {
            if(s1[i]==' ')
            {
                s2[j]='\0';
                //p=atof(s2);
                //if(kk==1) p=-1*p;
                a[q++]=s2;
                j=0;
                kk=0;
            }
            else
            {
                //if(s1[i]=='-') kk=1;
                 s2[j++]=s1[i];
            }
        }
        for(i=0;i<q;i++)
        {
            idx=b[i];
            if(idx>mx) mx=idx;
            bb[idx]=a[i];
        }
        for(i=1;i<=mx;i++) cout<<bb[i]<<endl;
    }
    return 0;
}
