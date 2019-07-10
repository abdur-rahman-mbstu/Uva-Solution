#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i=1,k;
    while(gets(str))
    {
        if(str[0]=='*')
            break;
        else if(strcmp(str,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(strcmp(str,"Umrah")==0)
            printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }
    return 0;
}
