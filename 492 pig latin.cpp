#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s,c;
    int i,p,n;
    while(scanf("%c",&s)==1)
    {
        if(isalpha(s))
        {
            if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||
                    s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
            {
                while(isalpha(s))
                {
                    printf("%c",s);
                    scanf("%c",&s);
                }
                printf("ay");
            }
            else
            {
                p=s;
                scanf("%c",&s);
                while(isalpha(s))
                {
                    printf("%c",s);
                    scanf("%c",&s);
                }
                printf("%cay",p);
            }
        }
        printf("%c",s);
    }
    return 0;
}
