#include<bits/stdc++.h>
using namespace std;
char st[10001],st1[110][5];
int main()
{
    long long i,j,n,T,ar[110],k,m,LL;
    double sum;
    cin>>T;
    while(T--)
    {
        sum=0;
        cin>>n;
        getchar();
        for(i=0; i<n; i++)
            scanf("%s %lld",st1[i],&ar[i]);
        cin>>m;
        getchar();
        for(i=0; i<m; i++)
        {
            gets(st);
            LL=strlen(st);
            for(j=0;j<LL;j++)
            {
                for(k=0;k<n;k++)
                    if(st[j]==st1[k][0])
                    sum+=ar[k];
            }
        }
        printf("%.2lf$\n",(sum/100.0));
    }
    return 0;
}
