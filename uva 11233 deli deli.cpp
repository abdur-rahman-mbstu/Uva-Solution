#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[105][105],str1[105][105],str2[105];
    int l,i,j,p,k,n,m;
    while(cin>>n>>m)
    {
        getchar();
        for(i=0; i<n; i++)
            scanf("%s %s",str[i],str1[i]);
        for(i=0; i<m; i++)
        {
            p=0;
            scanf("%s",str2);
            l=strlen(str2);
            for(j=0; j<n; j++)
            {
                if(strcmp(str2,str[j])==0)
                {
                    printf("%s",str1[j]);
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                if(str2[l-1]=='o'||str2[l-1]=='x'||str2[l-1]=='s'||(str2[l-1]=='h'&&str2[l-2]=='s')||(str2[l-2]=='c'&&str2[l-1]=='h'))
                {
                    for(k=0; k<l; k++)
                        printf("%c",str2[k]);
                    printf("es");
                }
                else if(str2[l-1]=='y'&&str2[l-2]!='a'&&str2[l-2]!='e'&&str2[l-2]!='i'&&str2[l-2]!='o'&&str2[l-2]!='u')
                {
                    for(k=0; k<l-1; k++)
                        printf("%c",str2[k]);
                    printf("ies");
                }
                else
                {
                    for(k=0; k<l; k++)
                        printf("%c",str2[k]);
                    printf("s");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
