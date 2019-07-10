#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long int i,j,n,a;
    char str[10];
    while(cin>>n)
    {
        long int sum=0;
        for(i=1; i<=n; i++)
        {
            getchar();
            scanf("%s",str);
            if(strcmp(str,"donate")==0)
            {
                scanf("%ld",&a);
                sum=sum+a;
            }
            else if(strcmp(str,"report")==0)
                cout<<sum<<endl;
        }
    }
    return 0;
}
