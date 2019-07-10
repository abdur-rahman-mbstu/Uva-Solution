#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
bool pal(string s)
{
    int sz=s.size(),i;
    if(sz==0) return 0;
    for(i=0; i<sz/2; i++)
    {
        if(s[i]!=s[sz-i-1]) return 0;
    }
    return 1;
}
int main()
{
    string s,s1;
    int sz,i,j,p,n,cnt;
    while(cin>>s)
    {
        mp.clear();
        sz = s.size();
        cnt=0;
        for(i=sz; i>=1; i--)
        {
            for(j=0; j<=sz-i; j++)
            {
                s1 = s.substr(j,i);
                if(mp[s1]==0)
                {
                    if(pal(s1))
                    {
                        mp[s1]=1;
                        cnt++;
                    }
                }
            }
        }
        cout<<"The string '"<<s<<"' contains "<<cnt<<" palindromes."<<endl;
    }
    return 0;
}
