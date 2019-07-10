#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[30];
    int i,ll,j,st1[30];
    while(~scanf("%s",st))
    {
        j=1;
        ll=strlen(st);
        for(i=0; i<ll; i++)
        {
            if(st[i]=='B'||st[i]=='F'||st[i]=='P'||st[i]=='V')
                st1[j++]=1;
            else if(st[i]=='C'||st[i]=='G'||st[i]=='J'||st[i]=='K'||st[i]=='Q'||st[i]=='S'||st[i]=='X'||st[i]=='Z')
                st1[j++]=2;
            else if(st[i]=='D'||st[i]=='T')
                st1[j++]=3;
            else if(st[i]=='L')
                st1[j++]=4;
            else if(st[i]=='M'||st[i]=='N')
                st1[j++]=5;
            else if(st[i]=='R')
                st1[j++]=6;
            else
                st1[j++]=0;
        }
        st1[0]=0;
        for(i=1; i<j; i++)
            if(st1[i]!=st1[i-1]&&st1[i]!=0)
                printf("%d",st1[i]);
        cout<<endl;
    }
    return 0;
}
