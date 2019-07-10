#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[7][105],s1[105],s2[105];
    int i,j,p,q,k,T,ll;
    cin>>T;
    getchar();
    while(T--)
    {
        memset(s,0,sizeof(s));
        gets(s1);
        gets(s2);
       int p=0,q=0,k=0,kk=0;
        ll=strlen(s1);
        for(i=0; i<ll; i++)
        {
            if(s1[i]=='<') p=1;
            if(p==1)
            {
                if(s1[i]!='<'&&s1[i]!='>') s[q][k++]=s1[i];
                else
                {
                    s[q][k]='\0';
                    q++;
                    k=0;
                }
            }
        }
        for(i=0; i<strlen(s1); i++)
        {
            if(s1[i]=='<'||s1[i]=='>') continue;
            else cout<<s1[i];
        }
        cout<<endl;
        for(i=0; i<strlen(s2); i++)
        {
            if(s2[i]!='.') cout<<s2[i];
            else
            {
                cout<<s[3]<<s[2]<<s[1]<<s[4];
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}
