#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[30],ss[100];
    int i,ll,j,s,q;
    printf("         NAME                     SOUNDEX CODE\n");
    while(~scanf("%s",st))
    {
        if(st[0]=='B'||st[0]=='F'||st[0]=='P'||st[0]=='V')
            j=1;
        else if(st[0]=='C'||st[0]=='G'||st[0]=='J'||st[0]=='K'||st[0]=='Q'||st[0]=='S'||st[0]=='X'||st[0]=='Z')
            j=2;
        else if(st[0]=='D'||st[0]=='T')
            j=3;
        else if(st[0]=='L')
            j=4;
        else if(st[0]=='M'||st[0]=='N')
            j=5;
        else if(st[0]=='R')
            j=6;
        else
            j=-1;
        q=0;
        ll=strlen(st);
        ss[q++]=st[0];
        for(i=1; i<ll; i++)
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
                ss[q++]=s+'0';
            j=s;
        }
        while(q<4)
        {
            ss[q++]='0';
        }
        ss[q]='\0';
        printf("         %s",st);
        for(int f=1; f<=35-(10+strlen(st)); f++) cout<<" ";
        for(i=0; i<4; i++) cout<<ss[i];
        cout<<endl;
    }
    printf("                   END OF OUTPUT\n");
    return 0;
}
