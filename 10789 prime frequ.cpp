#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    int i;
    if(n==0||n==1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(i=3; i*i<=n; i+=2)
    {
        if(n%i==0&&i!=n)
            return false;
    }
    return true;
}
int main()
{
    char st[2010];
    int ll,i,j,co[100],T;
    cin>>T;
    getchar();
    for(int t=1;t<=T;t++)
    {
        gets(st);
        memset(co,0,sizeof(co));
        ll=strlen(st);
        printf("Case %d: ",t);
        for(i=0; i<ll; i++)
        {
            if(st[i]>='0'&&st[i]<='9')
                co[st[i]-'0']++;
            else if(st[i]>='A'&&st[i]<='Z')
                co[st[i]-54]++;
            else if(st[i]>='a'&&st[i]<='z')
                co[st[i]-60]++;
        }
        int p=0;
        for(i=0; i<63; i++)
        {
            if(co>0)
            {
                if(prime(co[i])==true)
                {
                    p=1;
                    if(i>=0&&i<=9)
                        printf("%c",i+'0');
                    else if(i>9&&i<=36)
                        printf("%c",i+54);
                    else
                        printf("%c",i+60);
                }
            }
        }
        if(p==0)
            cout<<"empty";
        cout<<endl;
    }
    return 0;
}
