#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
bool cmp(char a,char b)
{
    int n=a,m=b;
    return mp[a]<mp[b];
}
int main()
{
    char s[105],s1[100];
    int ll,i,T,ind=0,j,pp;
    mp.clear();
    for(i=97,j=65; j<=90; i++,j++)
    {
        mp[j]=ind++;
        mp[i]=ind++;
    }
    cin>>T;
    getchar();
    while(T--)
    {
        cin>>s;
        ll=strlen(s);
        sort(s,s+ll,cmp);
        do
        {
            for(i=0; i<ll; i++) cout<<s[i];
            cout<<endl;
        }
        while(next_permutation(s,s+ll,cmp));
    }
    return 0;
}
