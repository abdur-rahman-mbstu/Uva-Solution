#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[110][90];
    int i,k,j,T,n=0;
    cin>>T;
    getchar();
    while(T--)
    {
        if(n==1)
            cout<<endl;
        n=1;
        i=0;
        while(gets(st[i]))
        {
            if(strlen(st[i])==0)
                break;
            i++;
        }
        for(j=0; j<i; j++)
        {
            for(k=0; k<strlen(st[j]); k++)
            {
                if(st[j][k]=='0')
                    cout<<"O";
                else if(st[j][k]=='1')
                    cout<<"I";
                else if(st[j][k]=='2')
                    cout<<"Z";
                else if(st[j][k]=='3')
                    cout<<"E";
                else if(st[j][k]=='4')
                    cout<<"A";
                else if(st[j][k]=='5')
                    cout<<"S";
                else if(st[j][k]=='6')
                    cout<<"G";
                else if(st[j][k]=='7')
                    cout<<"T";
                else if(st[j][k]=='8')
                    cout<<"B";
                else if(st[j][k]=='9')
                    cout<<"P";
                else
                    cout<<st[j][k];
            }
            cout<<endl;
        }
    }
    return 0;
}
