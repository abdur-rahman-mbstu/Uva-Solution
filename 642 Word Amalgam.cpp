#include<bits/stdc++.h>
using namespace std;
struct info
{
    string ss,ss1;
}in[105];
bool cmp(info a, info b)
{
    return a.ss<b.ss;
}
int main()
{
    string s,s1,s2;
    int i,j,p=0;
    while(cin>>s)
    {
        if(s=="XXXXXX") break;
        s1 = s;
        sort(s1.begin(),s1.end());
        in[p].ss = s;
        in[p].ss1 = s1;
        p++;
    }
    sort(in,in+p,cmp);
    //for(i=0;i<p;i++) cout<<in[i].ss<<" "<<in[i].ss1<<endl;
    while(cin>>s2)
    {
        j=0;
        if(s2=="XXXXXX") break;
        sort(s2.begin(),s2.end());
        for(i=0; i<p; i++)
        {
            if(s2==in[i].ss1)
            {
                cout<<in[i].ss<<endl;
                j=1;
            }
        }
        if(j==0) cout<<"NOT A VALID WORD"<<endl;
        cout<<"******"<<endl;
    }
    return 0;
}
