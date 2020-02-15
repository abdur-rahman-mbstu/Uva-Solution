#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<int,string>mp1;
int main()
{
    //freopen("417.txt","r",stdin);
    //freopen("417out.txt","w",stdout);
    string s,s1;

    char i,j,k,l,n;
    int ind=1,m,kk=0;
    for(i='a'; i<='z'; i++)
    {
        s1.push_back(i);
        mp[s1]=ind;
        mp1[ind]=s1;
        ind++;
        s1.clear();
    }
    for(i='a'; i<='z'; i++)
    {
        s1.clear();
        s1.push_back(i);
        for(j=i+1; j<='z'; j++)
        {
            s1.push_back(j);
            mp[s1]=ind;
            mp1[ind]=s1;
            ind++;
            s1.erase(s1.end()-1);
        }
    }
    for(i='a'; i<='z'; i++)
    {
        kk=0;
        s1.clear();
        s1.push_back(i);
        for(j=i+1; j<='z'; j++)
        {
            if(kk==1) break;
            if(s1.size()>=2) s1.erase(s1.end()-1);
            s1.push_back(j);
            for(k=j+1; k<='z'; k++)
            {
                s1.push_back(k);
                mp[s1]=ind;
                mp1[ind]=s1;
                ind++;
                s1.erase(s1.end()-1);
                if(k=='z'&&j=='y') kk=1;
            }
        }
    }
    for(i='a'; i<='z'; i++)
    {
        kk=0;
        s1.clear();
        s1.push_back(i);
        for(j=i+1; j<='z'; j++)
        {
            if(kk==1) break;
            while(s1.size()>=2) {s1.erase(s1.end()-1);}
            s1.push_back(j);
            for(k=j+1; k<='z'; k++)
            {
                if(kk==1) break;
                while(s1.size()>=3) {s1.erase(s1.end()-1);}
                s1.push_back(k);
                for(l=k+1; l<='z'; l++)
                {
                    s1.push_back(l);
                    mp[s1]=ind;
                    mp1[ind]=s1;
                    ind++;
                    s1.erase(s1.end()-1);
                    if(l=='z'&&k=='y'&&j=='x') kk=1;
                }
            }
        }
    }
    for(i='a'; i<='z'; i++)
    {
        kk=0;
        s1.clear();
        s1.push_back(i);
        for(j=i+1; j<='z'; j++)
        {
            if(kk==1) break;
            while(s1.size()>=2) {s1.erase(s1.end()-1);}
            s1.push_back(j);
            for(k=j+1; k<='z'; k++)
            {
                if(kk==1) break;
                while(s1.size()>=3) {s1.erase(s1.end()-1);}
                s1.push_back(k);
                for(l=k+1; l<='z'; l++)
                {
                    if(kk==1) break;
                    while(s1.size()>=4) {s1.erase(s1.end()-1);}
                    s1.push_back(l);
                    for(n=l+1; n<='z'; n++)
                    {
                        s1.push_back(n);
                        mp[s1]=ind;
                        mp1[ind]=s1;
                        ind++;
                        s1.erase(s1.end()-1);
                        if(n=='z'&&l=='y'&&k=='x'&&j=='w') kk=1;
                    }
                }
            }
        }
    }
    //for(int r=2000;r<=3000;r++) cout<<mp1[r]<<" "; cout<<endl;
    while(cin>>s)
    {
        //cin>>m; cout<<mp1[m]<<" ";
        cout<<mp[s]<<endl;
    }
    return 0;
}
