#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[20][20],na[20],nam[20];
    int a[20],n,i,j,m,ta,k,mon,kk=0;
    double pp;
    while(cin>>n)
    {
        if(kk==1)
            cout<<endl;
        kk=1;
        memset(a,0,sizeof(a));
        getchar();
        for(i=0; i<n; i++)
            scanf("%s",st[i]);
        for(i=0; i<n; i++)
        {
            scanf("%s %d %d",na,&ta,&m);
            pp=(double)ta/m;
            if(pp!=(int)pp)
                mon=ta-m*(int)pp;
            else
                mon=0;
            for(j=0; j<n; j++)
            {
                if(strcmp(st[j],na)==0)
                    a[j]=a[j]-ta+mon;
            }
            for(int p=0; p<m; p++)
            {
                scanf("%s",nam);
                for(k=0; k<n; k++)
                {
                    if(strcmp(st[k],nam)==0)
                        a[k]=a[k]+(int)pp;
                }
            }

        }
        for(i=0; i<n; i++)
            printf("%s %d\n",st[i],a[i]);
    }
    return 0;
}
