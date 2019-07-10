#include<bits/stdc++.h>
using namespace std;
struct info
{
    int fre,idx;
} in[130],in1[130];
bool cmp(info a, info b)
{
    return a.fre>b.fre;
}
map<char,char>mp;
int main()
{
    string s,s1;
    int n,i,j,fir[130],sec[130],T,p=0;
    for(i='a'; i<='z'; i++) mp[i]=i;
    for(i='A'; i<='Z'; i++) mp[i]=i;
    mp[32]=32;
    cin>>T;
    getchar();
    while(T--)
    {
        getchar();
        if(p==1) cout<<endl; p=1;
        memset(fir,0,sizeof(fir));
        memset(sec,0,sizeof(sec));
        getline(cin,s);
        getline(cin,s1);
        int sz,sz1,j=0,k=0;
        sz=s.size();
        sz1=s1.size();
        for(i=0; i<sz; i++) fir[s[i]]++;
        for(i=65; i<=122; i++)
        {
            if(fir[i]>0)
            {
                in[j].fre=fir[i]; in[j].idx=i;
                j++;
               // printf("%c %d\n",i,fir[i]);
            }
        }
        for(i=0; i<sz1; i++) sec[s1[i]]++;
        for(i=65; i<=122; i++)
        {
            if(sec[i]>0)
            {
                in1[k].fre=sec[i]; in1[k].idx=i;
                k++;
                //printf("%c %d\n",i,sec[i]);
            }
        }
        sort(in,in+j,cmp);
        sort(in1,in1+k,cmp);
        //for(i=0;i<j;i++) printf("%c %d\n",in[i].idx,in[i].fre); cout<<endl<<endl;
        //for(i=0;i<k;i++) printf("%c %d\n",in1[i].idx,in1[i].fre);
        for(i=0;i<k;i++)
        {
            mp[in1[i].idx]=in[i].idx;
        }
        for(i=0;i<sz1;i++) printf("%c",mp[s1[i]]); cout<<endl;
    }
    return 0;
}
