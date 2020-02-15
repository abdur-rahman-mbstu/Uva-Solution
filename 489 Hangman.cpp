#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    map<char,int>mp;
    map<char,int>mp1;
    map<char,int>mp2;
    int n,i;
    while(cin>>n)
    {
        int cnt=1,ind=1,ind1=1,p=0;
        mp.clear();
        mp1.clear();
        mp2.clear();
        if(n==-1) break;
        cin>>s>>s1;
        for(i=0; i<s.size(); i++) if(mp[s[i]]==0) mp[s[i]]=ind++;
        cout<<"Round "<<n<<endl;
        for(i=0; i<s1.size(); i++)
        {
            if(mp[s1[i]]==0)
            {
                if(mp1[s1[i]]==0) mp1[s1[i]]=ind1++;
            }
            else
            {
                if(mp2[s1[i]]==0) cnt++;
                mp2[s1[i]]=1;
            }
            if(cnt>=ind)
            {
                cout<<"You win."<<endl;
                p=1;
                break;
            }
            if(ind1>=8)
            {
                cout<<"You lose."<<endl;
                p=1;
                break;
            }
        }
        //cout<<ind1<<" "<<cnt<<endl;
        if(p==0) cout<<"You chickened out."<<endl;
    }
    return 0;
}
