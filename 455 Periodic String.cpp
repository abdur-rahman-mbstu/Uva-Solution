#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    int sz,i,j,k,T,p,q,r=0;
    cin>>T;
    while(T--)
    {
        if(r==1) cout<<endl; r=1;
        cin>>s;
        sz = s.size();
        for(i=1;i<=sz;i++)
        {
            q=0;
            s1 = s.substr(0,i);
            k=i;
            while(k<sz)
            {
                //cout<<k<<" ";
                s2 = s.substr(k,i);
                //cout<<s1<<" "<<s2<<endl;
                if(s2!=s1)
                {
                    q=1;
                    break;
                }
                k = k+i;
            }
            //cout<<endl;
            if(q==0) break;
        }
        cout<<i<<endl;
    }
    return 0;
}
