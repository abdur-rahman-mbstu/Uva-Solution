#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10000];
    int sum,n,i,T;
    cin>>T;
    getchar();
    while(T--)
    {
        n=1;sum=0;
        gets(str);
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]=='O')
            {
                sum=sum+n;
                n++;
            }
            else
                n=1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
