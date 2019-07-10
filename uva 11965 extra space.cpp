#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[55][550],s1[55][550];
    int ll,i,j,c=1,p,T,n,k,m=0;
    cin>>T;
    while(T--)
    {
        if(m==1) cout<<endl;
        m=1;
        cin>>n;
        getchar();
        for(i=0; i<n; i++) gets(s[i]);
            printf("Case %d:\n",c++);
        for(i=0; i<n; i++)
        {
            k=0;p=0;
            ll=strlen(s[i]);
            for(j=0; j<ll; j++)
            {
                if(s[i][j]==' '&&p==0)
                {
                    s1[i][k++]=s[i][j];
                    p=1;
                }
                else
                {
                    if(s[i][j]==' ')
                        continue;
                    s1[i][k++]=s[i][j];
                    p=0;
                }
            }
            s1[i][k]='\0';
        }
        for(i=0; i<n; i++) printf("%s\n",s1[i]);
    }
    return 0;
}
