#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[100],s1;
    int sz,i,j,n,p,q,k,t=1;
    while(cin>>s[0])
    {
        q=0;
        j=1;
        while(cin>>s[j])
        {
            if(s[j]=="9") break;
            j++;
        }
        //for(i=0;i<j;i++) cout<<s[i]<<" "; cout<<endl;
        for(i=0;i<j;i++)
        {
            sz = s[i].size();
            for(k=0;k<j;k++)
            {
                if(i==k) continue;
                if(s[k].size()>=sz)
                {
                    s1 = s[k].substr(0,sz);
                    if(s1==s[i])
                    {
                        q=1;
                        break;
                    }
                }
            }
            if(q==1) break;
        }
        cout<<"Set "<<t++;
        if(q==0) cout<<" is immediately decodable"<<endl;
        else cout<<" is not immediately decodable"<<endl;
    }
    return 0;
}
