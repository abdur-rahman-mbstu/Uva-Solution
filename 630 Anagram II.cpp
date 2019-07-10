#include<bits/stdc++.h>
using namespace std;
struct info
{
    string dic,srs;
}in[1005];
int main()
{
    string ss,ss1;
    int i,j,p,q=0,T,n;
    cin>>T;
    while(T--)
    {
        if(q==1) cout<<endl; q=1;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>in[i].dic;
            in[i].srs = in[i].dic;
            sort(in[i].srs.begin(),in[i].srs.end());
        }
        while(1)
        {
            cin>>ss;
            if(ss=="END") break;
            ss1=ss;
            sort(ss1.begin(),ss1.end());
            cout<<"Anagrams for: "<<ss<<endl;
            p=1;
            for(i=0;i<n;i++)
            {
                //if(ss1>in[i].srs) break;
                if(ss1==in[i].srs)
                {
                    printf("%3d) ",p++); cout<<in[i].dic<<endl;
                }
            }
            if(p==1) cout<<"No anagrams for: "<<ss<<endl;
        }
        //for(i=0;i<n;i++) cout<<in[i].dic<<" "<<in[i].srs<<endl;
    }
    return 0;
}
