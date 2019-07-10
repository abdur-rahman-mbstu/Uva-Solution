#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[55][505],s1[55][505];
    int n,m=0,T,i,j,p,q,t=1;
    cin>>T;
    while(T--)
    {
        cin>>n;
        getchar();
        p=0;
        for(i=0;i<n;i++) gets(s[i]);
        if(m==1) cout<<endl; m=1;
        cout<<"Case "<<t++<<":"<<endl;
        for(i=0;i<n;i++)
        {
            q=0;p=0;
            for(j=0;j<strlen(s[i]);j++)
            {
                if(s[i][j]==' ') p++;
                if(p==1&&s[i][j]==' ') s1[i][q++]=s[i][j];
                if(s[i][j]!=' ')
                {
                    s1[i][q++]=s[i][j];
                    p=0;
                }
            }
            s1[i][q]='\0';
        }
        for(i=0;i<n;i++) cout<<s1[i]<<endl;
    }
    return 0;
}
