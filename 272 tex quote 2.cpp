#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100000];
    int i,j,m,n=0;
    while(gets(str))
    {
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]=='"')
            {
               n++;
               if(n%2!=0)
                    cout<<"``";
               else
                cout<<"''";
            }
            else
                cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
