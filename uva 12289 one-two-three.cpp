#include<stdio.h>
#include<string.h>
main()
{
    char str[1000];
    int count=0,t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(str);
        if(strlen(str)==5)
            printf("3\n");
        else
        {
            count=0;
            if(str[0]=='o') count++;
            if(str[1]=='n') count++;
            if(str[2]=='e') count++;
            if(count>=2)
                printf("1\n");
            else
                printf("2\n");
        }

    }
    return 0;
}

