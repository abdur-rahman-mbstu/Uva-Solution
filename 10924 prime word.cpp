#include<bits/stdc++.h>
#include<string.h>
int prime(int a)
{
    int i;
    if(a==0)
        return false;
    if(a==1||a==2)
        return true;
    if(a%2==0)
        return false;
    for(i=3; i<=i*i; i+=2)
    {
        if(a%i==0&&i!=a)
            return false;
    }
    return true;
}
main()
{
    char str[30];
    int i,len,sum,n;
    while(gets(str))
    {
        sum=0;
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(isupper(str[i]))
                n=str[i]-38;
            else
                n=str[i]-96;
            sum=sum+n;
        }
        if(prime(sum)==true)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
