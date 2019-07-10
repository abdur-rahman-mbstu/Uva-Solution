#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10000],str1[100][100];
    int ll,i,j,k,p,T;
    float n;
    cin>>T;
    getchar();
    while(T--)
    {
        gets(str);
        ll=strlen(str);
        n=sqrt(ll);
        if(n!=(int)n)
        {
            cout<<"INVALID"<<endl;
            continue;
        }
        k=0;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                str1[i][j]=str[k++];
        for(j=0; j<n; j++)
            for(i=0; i<n; i++)
                printf("%c",str1[i][j]);
        printf("\n");
    }
    return 0;
}
