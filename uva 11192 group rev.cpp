#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    int count,i,j,ll,n,k;
    while(scanf("%d ",&n)==1)
    {
        if(n==0)
            break;
        j=0;
        gets(str);
        ll=strlen(str);
        int gp=ll/n;
        for(i=0; i<ll; i++)
        {
            str1[j++]=str[i];
            if(j==gp)
            {
                for(k=j-1;k>=0;k--)
                    printf("%c",str1[k]);
                j=0;
            }
        }
       printf("\n");
    }
    return 0;
}
