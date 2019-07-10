#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    char s[100],s1[100][1000],ss[100];
    int n,m,p,q,i,j,mx[100],k,ll,cnt,mx1,t=1;
    while(cin>>n>>m)
    {
        mp.clear();
        mx1=0;
        getchar();
        for(i=0; i<n; i++)
        {
            cin>>s;
            mp[s]=1;
        }
        getchar();
        for(i=0; i<m; i++)
        {
            k=0;
            cnt=0;
            gets(s1[i]);
            ll=strlen(s1[i]);
            for(j=0; j<ll; j++)
            {
                if((s1[i][j]>=65&&s1[i][j]<=90)||(s1[i][j]>=97&&s1[i][j]<=122))
                {
                    if(s1[i][j]<97) ss[k++]=s1[i][j]+32;
                    else ss[k++]=s1[i][j];
                }
                else
                {
                    ss[k]='\0';
                    //cout<<ss<<endl;
                    if(mp[ss]==1) cnt++;
                    k=0;
                }
            }
            if((s1[i][j-1]>=65&&s1[i][j-1]<=90)||(s1[i][j-1]>=97&&s1[i][j-1]<=122))
            {
                ss[k]='\0';
                //cout<<ss<<endl;
                if(mp[ss]==1) cnt++;
                k=0;
            }
            if(cnt>mx1) mx1=cnt;
            mx[i]=cnt;
            cnt=0;
        }
        printf("Excuse Set #%d\n",t++);
        for(i=0; i<m; i++)
        {
            if(mx[i]==mx1) cout<<s1[i]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
