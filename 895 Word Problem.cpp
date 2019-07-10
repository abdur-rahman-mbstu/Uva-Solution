#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt[1002][28]={0},i,j,k=0,n,p,q,co,ct[28],kk;
    char s[15],s1[1000];
    while(cin>>s)
    {
        if(s[0]=='#') break;
        p=strlen(s);
        for(i=0; i<p; i++)
        {
            cnt[k][s[i]-'a']++;
        }
        k++;
    }
    getchar();
    while(gets(s1))
    {
        co=0;
        memset(ct,0,sizeof(ct));
        if(s1[0]=='#') break;
        p=strlen(s1);
        for(i=0;i<p;i++) if(isalpha(s1[i])) ct[s1[i]-'a']++;
        for(i=0;i<k;i++)
        {
            kk=0;
            for(j=0;j<26;j++)
            {
                if(ct[j]<cnt[i][j])
                {
                    kk=1;
                    break;
                }
            }
            if(kk==0) co++;
        }
        cout<<co<<endl;
    }
    return 0;
}
