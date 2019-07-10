#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[22][105],st2[105],st1[22][105];
    int i,j,p,n;
    while(cin>>n)
    {
        getchar();
        for(i=0; i<n; i++)
        {
            gets(st[i]);
            gets(st1[i]);
        }
        cin>>p;
        getchar();
        for(i=0; i<p; i++)
        {
            gets(st2);
            for(j=0; j<n; j++)
            {
                if(strcmp(st[j],st2)==0)
                    puts(st1[j]);
            }
        }
    }
    return 0;
}
