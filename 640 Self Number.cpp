#include<bits/stdc++.h>
#define mx 1000000
using namespace std;
int a[1000005];
void cal()
{
    int i,j,p,q;
    for(i=1;i<=mx;i++)
    {
        p=i;q=i;
        while(q>0)
        {
            p+=(q%10);
            q/=10;
        }
        a[p]=1;
    }
}
int main()
{
    cal();
    int i;
    for(i=1;i<=mx;i++) if(a[i]==0) cout<<i<<endl;
}
