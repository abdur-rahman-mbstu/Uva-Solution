#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int sz,i,j,n,p,q,T,c,sz1;
    cin>>T;
    getchar();
    while(T--)
    {
        cin>>s;
        cin>>n;
        sz = s.size();
        getchar();
        while(n--)
        {
            cin>>s1;
            p=0;
            c=0;
            sz1 = s1.size();
            for(i=0; i<sz1; i++)
            {
                if(s1[i]==s[i]) c++;
                else break;
            }
            if(c==sz1) cout<<"y"<<endl;
            else cout<<"n"<<endl;
        }
    }
    return 0;
}
