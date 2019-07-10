#include<bits/stdc++.h>
using namespace std;
#define mx 1299800
bool check[mx];
void prime()
{
    int i,j;
    for(i=3;i<=mx;i+=2) check[i]=true;
    for(i=3;i*i<=mx;i+=2)
    {
        if(check[i]==true)
        {
            for(j=i*i;j<=mx;j+=i+i) check[j]=false;
        }
    }
    check[2] = true;
}
int main()
{
    prime();
    int n,i,j,up,lw;
    while(cin>>n&&n)
    {
        for(i=n;i>1;i--)
        {
            if(check[i]==true)
            {
                lw = i;
                break;
            }
        }
        for(i=n;i<1299800;i++)
        {
            if(check[i]==true)
            {
                up = i;
                break;
            }
        }
        cout<<up-lw<<endl;
    }
    return 0;
}
