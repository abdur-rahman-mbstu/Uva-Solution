#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[10005][110];
    int n,i=0,j,k,a,max=0,p,co=0,l;
    while(scanf("%s",st[i]))
    {
        if(strcmp("E-N-D",st[i])==0)
            break;
        i++;
    }
    for(k=0; k<i; k++)
    {
        for(l=0; l<strlen(st[k]); l++)
        {
            if((st[k][l]>=65&&st[k][l]<=90)||(st[k][l]>=97&&st[k][l]<=122)||st[k][l]==45||(st[k][l]>=48&&st[k][l]<=59))
                co++;
        }
        a=co;
        co=0;
        if(a>max)
        {
            max=a;
            n=k;
        }
    }
    p=strlen(st[n]);
    for(j=0; j<p; j++)
    {
        if((st[n][j]>=65&&st[n][j]<=90)||(st[n][j]>=97&&st[n][j]<=122)||st[n][j]==45||(st[n][j]>=48&&st[n][j]<=59))
        {
            if(st[n][j]>=65&&st[n][j]<=90)
                st[n][j]=st[n][j]+32;
            printf("%c",st[n][j]);
        }
    }
    cout<<endl;
    return 0;
}
