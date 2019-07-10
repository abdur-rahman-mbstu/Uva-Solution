#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10000];
    int n,count,i,j,t,T;
    cin>>T;
    getchar();
    for(t=1;t<=T;t++)
    {
        int num=0;
        count=0;
        gets(str);
        cout<<"Case "<<t<<": ";
        for(i=0; i<=strlen(str); i++)
        {
            if(isdigit(str[i]))
            {
                count++;
                num=num*10+(str[i]-'0');
                continue;
            }
            for(j=0; j<num; j++)
                cout<<str[i-count-1];
            num=0;
            count=0;
        }
        cout<<endl;
    }
    return 0;
}
