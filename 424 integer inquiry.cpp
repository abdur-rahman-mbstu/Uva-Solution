#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[150],st[105][105],st1[105][105];
    int i,j,sum,r,ll,n=0,m=0;
    while(cin>>st1[n])
    {
        ll=strlen(st1[n]);
        m=max(m,ll);
        if(st1[n][0]=='0')
            break;
        n++;
    }
    int ca=0,p=0,nn;
    for(i=0; i<n; i++)
    {
        int aa=0;
        for(j=strlen(st1[i])-1; j>=0; j--)
            st[i][aa++]=st1[i][j];
        st[i][aa++]='\0';
    }
    for(i=0; i<m; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            if(strlen(st[j])>i)
                nn=st[j][i]-'0';
            else
                nn=0;
            sum+=nn;
        }
        sum+=ca;
        if(sum>9)
        {
            a[p++]=sum%10+'0';
            ca=sum/10;
        }
        else
        {
            a[p++]=sum+'0';
            ca=0;
        }
    }
    while(ca>0)
    {
        a[p++]=ca%10+'0';
        ca/=10;
    }
    for(i=p-1; i>=0; i--)
        cout<<a[i];
    cout<<endl;
    return 0;
}
