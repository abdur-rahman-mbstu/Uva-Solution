#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000],str1[1000];
    int i,j,len,k,m,n;
    while(gets(str))
    {
        if(str[0]=='*'&&strlen(str)==1)
            break;
        n=0;
        m=0;
        int count=0;
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(isalpha(str[i]))
            {
                if(n==0)
                {
                    str1[m]=str[i];
                    n=1;
                    m++;
                }
            }
            else
                n=0;
        }
        int len1=m;
        for(i=0; i<len1; i++)
        {
            if(str1[i]>=65&&str1[i]<=90)
                str1[i]=str1[i];
            else if(str1[i]>=97&&str1[i]<=122)
                str1[i]=str1[i]-32;
        }
        for(i=0; i<len1-1; i++)
        {
                if(str1[i]==str1[i+1])
                    count++;
        }
        if(count==len1-1)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
