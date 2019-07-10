#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105][10],s1[10],s2[10],s3[10],c;
    int i,j,p=0,ll,co=0,aa;
    while(cin>>s[p])
        p++;
    for(i=0; i<p; i++)
    {
        int q=0,k=0,a=0,z=0,n=0,ans=0,m=0;
        ll=strlen(s[i]);
        //cout<<ll<<endl;
        for(j=0; j<ll; j++)
        {
            if(s[i][j]=='+'||s[i][j]=='-')
                a=1;
            if(s[i][j]=='=')
                a=2;
            if(a==0)
                s1[z++]=s[i][j];
            if(a==1)
            {
                if(s[i][j]=='+'||s[i][j]=='-')
                {
                    c=s[i][j];
                    continue;
                }
                s2[q++]=s[i][j];
            }
            if(a==2)
            {
                if(s[i][j]=='=')
                    continue;
                s3[k++]=s[i][j];
            }
        }
        //cout<<z<<" "<<q<<" "<<k<<endl;
        for(int t=0; t<z; t++)
            n=n*10+(s1[t]-'0');
        for(int e=0; e<q; e++)
            m=m*10+(s2[e]-'0');
        for(int w=0; w<k; w++)
            ans=ans*10+(s3[w]-'0');
        if(c=='+')
            aa=n+m;
        else
            aa=n-m;
        if(aa==ans)
            co++;
    }
    cout<<co<<endl;
    return 0;
}
