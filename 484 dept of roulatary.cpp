#include<bits/stdc++.h>
using namespace std;
map<long long,long>mp;
vector<long long>v;
char st[1000000];
long long co[10000];
int main()
{
    long long n,m,ind=1,i;
    memset(co,0,sizeof(co));
    v.push_back(0);
    while(cin>>n)
    {
        if(mp[n]==0)
        {
            m=n;
            mp[n]=ind++;
            v.push_back(m);
        }
        co[mp[n]]++;
    }
    for(i=1; i<ind; i++)
        cout<<v[i]<<" "<<co[i]<<endl;
    return 0;
}
