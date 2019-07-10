#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[205];
    int co[30],i,j,n,T;
    cin>>T;
    getchar();
    while(T--)
    {
        int max=0;
        memset(co,0,sizeof(co));
        gets(str);
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]>=65&&str[i]<=90)
                str[i]=str[i]+32;
            if(str[i]>=97&&str[i]<=122)
                co[str[i]-'a']++;
        }
        for(i=0; i<26; i++)
        {
            if(co[i]>max)
                max=co[i];
        }
        for(i=0; i<26; i++)
        {
            if(co[i]==max)
                printf("%c",i+'a');
        }
        cout<<endl;
    }
    return 0;
}
