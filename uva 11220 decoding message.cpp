#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[110][1020];
    int i,j,p,c,T,n,t=1,q=0;
    scanf("%d",&T);
    scanf("\n");
    while(T--)
    {
        if(q==1)
            cout<<endl;
        q=1;
        n=0;
        while(gets(st[n]))
        {
            if(strlen(st[n])==0)
                break;
            n++;
        }
        printf("Case #%d:\n",t++);
        for(i=0; i<n; i++)
        {
            c=1;
            for(j=0; j<strlen(st[i]); j++)
            {
                if(j==0)
                {
                    cout<<st[i][0];
                    c++;
                    p=30;
                }
                if(st[i][j]==' ')
                    p=0;
                else
                    p++;
                if(p==c)
                {
                    cout<<st[i][j];
                    c++;
                    p=30;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
