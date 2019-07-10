#include<bits/stdc++.h>
using namespace std;
map<string,int>mp2;
map<int,string>mp1;
int cnt[1000000];
int main()
{
    int n,i,p,q,k;
    string s,s1;
    while(cin>>n)
    {
        mp1.clear();
        mp2.clear();
        getchar();
        cin>>s;
        memset(cnt,0,sizeof(cnt));
        int sz=s.size();
        int p=0,q=n,ind=1,idx,mx=-9;
        while(q<sz)
        {
            s1.clear();
            //cout<<p<<" "<<q<<endl;
            for(i=p;i<q;i++) s1.push_back(s[i]);
            p++;
            q++;
            //cout<<s1<<endl;
            if(mp2[s1]==0)
            {
                mp1[ind]=s1;
                mp2[s1]=ind;
                ind++;
            }
            k=mp2[s1];
            cnt[k]++;
            if(cnt[k]>mx)
            {
                mx=cnt[k];
                idx=k;
            }
        }
        cout<<mp1[idx]<<endl;
    }
    return 0;
}
