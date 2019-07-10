#include<bits/stdc++.h>
using namespace std;
int multiply(char str[],int len)
{
    int i,result=0;
    for(i=0; i<len; i++)
        result=((result*10)+(str[i]-'0'))%17;
    return result;
}
int main()
{
    char str[100];
    int i,n,m,j,a;
    while(gets(str))
    {
        n=strlen(str);
        m=multiply(str,n);
        if(str[0]=='0'&&n==1)
            break;
        if(m==0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}
