#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int i,j,n=0,m;
    while(scanf("%c",&ch)==1)
    {
        if(ch=='"')
        {
            n++;
            if(n%2==0)
                printf("''");
            else
                printf("``");
        }
        else
            printf("%c",ch);
    }
    return 0;
}
