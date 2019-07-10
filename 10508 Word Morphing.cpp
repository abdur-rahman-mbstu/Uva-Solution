#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    string s[5000],pre,now;
    int i,n,m,p,c,j,k;
    while(cin>>n>>m)
    {
        mp.clear();
        getchar();
        for(i=0; i<n; i++) cin>>s[i];
        pre=s[0];
        cout<<pre<<endl;
        for(k=1; k<n; k++)
        {
            for(i=1; i<n; i++)
            {
                c=0;
                now=s[i];
                if(mp[now]==0)
                {
                    for(j=0; j<m; j++)
                    {
                        if(pre[j]!=now[j])
                        {
                            c++;
                            if(c>1) break;
                        }
                    }
                    if(c==1)
                    {
                        cout<<now<<endl;
                        pre=now;
                        mp[now]=1;
                    }
                }
            }
        }
    }
    return 0;
}
