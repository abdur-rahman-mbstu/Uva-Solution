#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[30];
    int i,ll,j,s;
    while(~scanf("%s",st))
    {
        j=-1;
        ll=strlen(st);
        for(i=0; i<ll; i++)
        {
            if(st[i]=='B'||st[i]=='F'||st[i]=='P'||st[i]=='V')
                s=1;
            else if(st[i]=='C'||st[i]=='G'||st[i]=='J'||st[i]=='K'||st[i]=='Q'||st[i]=='S'||st[i]=='X'||st[i]=='Z')
                s=2;
            else if(st[i]=='D'||st[i]=='T')
                s=3;
            else if(st[i]=='L')
                s=4;
            else if(st[i]=='M'||st[i]=='N')
                s=5;
            else if(st[i]=='R')
                s=6;
            else
                s=-1;
            if(s!=j&&s!=-1)
                cout<<s;
            j=s;
        }
        cout<<endl;
    }
    return 0;
}
