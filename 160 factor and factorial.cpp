#include<bits/stdc++.h>
#define mx 101
using namespace std;
bool check[mx];
int arr[mx];

void prime()
{
    int i,j,k=0;
    for(i=3; i<=mx; i+=2)
        check[i]=true;
    for(i=3; i*i<=mx; i+=2)
    {
        if(check[i]==true)
        {
            for(j=i*i; j<=mx; j+=i+i)
                check[j]=false;
        }
    }
    arr[k++]=2;
    for(i=3; i<=mx; i+=2)
    {
        if(check[i]==true)
            arr[k++]=i;
    }
}
int main()
{
    prime();
    int n,count[100],i,j,m,p,sum,c;
    while(cin>>n)
    {
        if(n==0)
            break;
        printf("%3d! =",n);
        if(n==1)
        {
            cout<<" "<<endl;
            continue;
        }
        memset(count,0,sizeof(count));
        for(i=2; i<=n; i++)
        {
            p=i;
            for(j=0; arr[j]<=p; j++)
            {
                while(p%arr[j]==0)
                {
                    count[arr[j]]++;
                    p=p/arr[j];
                }
            }
        }
        printf("%3d",count[2]);
        c=1;
        for(i=3; i<=n; i+=2)
        {
            if(check[i]==true)
            {
                c++;
                if(c==16)
                {
                    printf("\n      ");
                    c=1;
                }
                printf("%3d",count[i]);
            }
        }
        cout<<endl;
    }
    return 0;
}
