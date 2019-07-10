#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[210];
    double sum,a,p;
    int co,i,j,ll;
    while(gets(st))
    {
        sum=0;co=0;
        ll=strlen(st);
        if(st[0]=='*'&&ll==1)
            break;
        for(i=0; i<ll; i++)
        {
            if(st[i]!='/')
            {
                if(st[i]=='W')
                    sum+=1;
                else if(st[i]=='H')
                    sum+=.5;
                else if(st[i]=='Q')
                    sum+=.25;
                else if(st[i]=='E')
                    sum+=.125;
                else if(st[i]=='S')
                    sum+=(1.0/16);
                else if(st[i]=='T')
                    sum+=(1.0/32);
                else if(st[i]=='X')
                    sum+=(1.0/64);
            }
            else
            {
                if(sum==1.0)
                    co++;
                sum=0;
            }
        }
        cout<<co<<endl;
    }
    return 0;
}
