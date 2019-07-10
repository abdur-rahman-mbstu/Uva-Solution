#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[100],st1[100],st3[100],st4[100];
    int ll,l2,i,j,n,T,k;
    cin>>T;
    getchar();
    for(int t=1;t<=T;t++)
    {
        j=0;k=0;
        gets(st);
        gets(st1);
        ll=strlen(st);
        l2=strlen(st1);
        cout<<"Case "<<t<<": ";
        if(strcmp(st,st1)==0)
         cout<<"Yes"<<endl;
         else
         {
             for(i=0;i<ll;i++)
             {
                 if(st[i]!=' ')
                    st3[j++]=st[i];
             }
             st3[j]='\0';
             for(i=0;i<l2;i++)
             {
                 if(st1[i]!=' ')
                    st4[k++]=st1[i];
             }
             st4[k]='\0';
             if(strcmp(st3,st4)==0)
                cout<<"Output Format Error"<<endl;
             else
                cout<<"Wrong Answer"<<endl;
         }
    }
    return 0;
}
