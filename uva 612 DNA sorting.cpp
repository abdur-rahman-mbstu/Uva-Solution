#include<bits/stdc++.h>
using namespace std;
struct info
{
    int num,index;
} in[110];
bool cmp(info a, info b)
{
    if(a.num==b.num)
        return a.index<b.index;
    return a.num<b.num;
}
int main()
{
    char st[105][55],ch;
    int co[110],i,j,n,m,c,k,T,p=0;
    cin>>T;
    while(T--)
    {
        if(p==1) cout<<endl;
        p=1;
        cin>>n>>m;
        getchar();
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>ch;
                st[i][j]=ch;
            }
            st[i][j]='\0';
        }
        for(i=0; i<m; i++)
        {
            c=0;
            for(j=0; j<n; j++)
            {
                for(k=j+1; k<n; k++)
                    if(st[i][j]>st[i][k])
                        c++;
            }
            co[i]=c;
        }
        for(i=0; i<m; i++)
        {
            in[i].index=i;
            in[i].num=co[i];
        }
        sort(in,in+m,cmp);
        for(i=0; i<m; i++)
            cout<<st[in[i].index]<<endl;
    }
    return 0;
}
