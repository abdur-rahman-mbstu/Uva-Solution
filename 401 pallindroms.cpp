#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[25],st1[25],st2[25],st4[25];
    int ll,i;
    while(cin>>st)
    {
        int k=0,p=0,s=0,j=0,t=0;
        ll=strlen(st);
        for(i=ll-1; i>=0; i--)
            st1[j++]=st[i];
        st1[j]='\0';
        if(strcmp(st,st1)==0)
            p=1;
        for(i=0; i<ll; i++)
        {
            if(st[i]=='3')
                st4[t++]='E';
            else if(st[i]=='J')
                st4[t++]='L';
            else if(st[i]=='2')
                st4[t++]='S';
            else if(st[i]=='5')
                st4[t++]='Z';
            else if(st[i]=='E')
                st4[t++]='3';
            else if(st[i]=='L')
                st4[t++]='J';
            else if(st[i]=='S')
                st4[t++]='2';
            else if(st[i]=='Z')
                st4[t++]='5';
            else if(st[i]=='A')
                st4[t++]='A';
            else if(st[i]=='H')
                st4[t++]='H';
            else if(st[i]=='I')
                st4[t++]='I';
            else if(st[i]=='M')
                st4[t++]='M';
            else if(st[i]=='O')
                st4[t++]='O';
            else if(st[i]=='T')
                st4[t++]='T';
            else if(st[i]=='U')
                st4[t++]='U';
            else if(st[i]=='V')
                st4[t++]='V';
            else if(st[i]=='X')
                st4[t++]='X';
            else if(st[i]=='Y')
                st4[t++]='Y';
            else if(st[i]=='1')
                st4[t++]='1';
            else if(st[i]=='8')
                st4[t++]='8';
        }
        st4[t]='\0';
        for(i=t-1; i>=0; i--)
            st2[k++]=st4[i];
        st2[k]='\0';
        // puts(st2);
        //puts(st4);
        if(strcmp(st2,st)==0)
            s=1;
        if(p==1)
        {
            if(s==1)
                printf("%s -- is a mirrored palindrome.\n",st);
            else
                printf("%s -- is a regular palindrome.\n",st);
        }
        else if(p==0&&s==1)
            printf("%s -- is a mirrored string.\n",st);
        else
            printf("%s -- is not a palindrome.\n",st);
        cout<<endl;
    }
    return 0;
}
