#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100000],str1[100000],str2[100000];
    int ll,i,j,k;
    while(gets(str))
    {
        if(strcmp(str,"DONE")==0)
            break;
        memset(str1,0,sizeof(str1));
        memset(str2,0,sizeof(str2));
        j=0;
        k=0;
        ll=strlen(str);
        for(i=0; i<ll; i++)
        {
            if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
            {
                if(str[i]>=65&&str[i]<=90)
                {
                    str[i]=str[i]+32;
                    str1[j++]=str[i];
                }
                else
                    str1[j++]=str[i];
            }
        }
        for(i=j-1; i>=0; i--)
            str2[k++]=str1[i];
        if(strcmp(str1,str2)==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
