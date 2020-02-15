#include<bits/stdc++.h>
using namespace std;
map<long long,int>mp;
int main()
{
    long long z,i,m,l,j,p,t=1,cnt;
    while(cin>>z>>i>>m>>l)
    {
        if(z==0&&i==0&&m==0&&l==0) break;
        mp.clear();
        cnt=0;
        while(1)
        {
            p = (z*l+i)%m;
            if(mp[p]==0)
            {
                mp[p]=1;
                cnt++;
            }
            else break;
            l = p;
        }
        cout<<"Case "<<t++<<": "<<cnt<<endl;
    }
    return 0;
}
