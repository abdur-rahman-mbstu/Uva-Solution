#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st1[300][110],st[16][11]= {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia",
                                    "Happy","birthday","to","you"
                                   };
    int n,i,j,co,c;
    while(cin>>n)
    {
        co=0;
        c=0;
        getchar();
        for(i=0; i<n; i++)
            scanf("%s",st1[i]);
        for(i=0;; i++)
        {
            c++;
            co++;
            printf("%s: %s\n",st1[i%n],st[i%16]);
            if(c>=n)
            {
                if(co==16)
                    break;
            }
            if(co==16)
                co=0;
        }
    }
    return 0;
}
