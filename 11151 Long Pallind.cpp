#include<bits/stdc++.h>
using namespace std;
bool pal(string s)
{
    int sz,i,p;
    sz = s.size();
    for(i=0;i<sz/2;i++)
    {
        if(s[i]!=s[sz-i-1]) return 0;
    }
    return 1;
}
int main()
{
    string s,s1;
    int sz,i,j,p,q,T,mx;
    cin>>T;
    while(T--)
    {
        cin>>s;
        p=0;q=0;mx=0;
        sz = s.size();
        for(i=sz;i>0;i--)
        {
            for(j=0;j<=sz-i;j++)
            {
                s1 = s.substr(j,i);
                //cout<<s1<<" "<<j<<" "<<i<<endl;
                if(pal(s1))
                {
                    p = s1.size();
                    q = 1;
                    break;
                }
            }
            if(q==1) break;
        }
        cout<<p<<endl;
    }
    return 0;
}
