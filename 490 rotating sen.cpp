#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[110][110];
    int ll,i,j,n=0,max=0;
    while(gets(str[n]))
        n++;
    for(i=0;i<n;i++)
    {
        ll=strlen(str[i]);
        if(ll>max)
            max=ll;
        for(j=ll;j<max;j++)
            str[i][j]=' ';
    }
    for(i=0;i<max;i++)
    {
        for(j=n-1;j>=0;j--)
            printf("%c",str[j][i]);
        printf("\n");
    }
    return 0;
}
