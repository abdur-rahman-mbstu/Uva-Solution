#include<bits/stdc++.h>
#define mx 1000005
using namespace std;
bool check[mx];
long arr[mx],k=0;

void prime()
{
    long i,j;
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
    long n,m,max,min,i,j,low,high,p,cc,val,nn,count[999],T;
    prime();
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        max=-13;
        min=120000;
        cc=0;
        nn=0;
        low=lower_bound(arr,arr+k,n)-arr;
        high=upper_bound(arr,arr+k,m)-arr;
        memset(count,0,sizeof(count));
        if((high-low)<2)
            cc=0;
        else
        {
            for(i=low; i<high-1; i++)
            {
                p=abs(arr[i]-arr[i+1]);
                {
                    count[p]++;
                    if(p>max)
                        max=p;
                    if(p<min)
                        min=p;
                }
            }
            for(i=min; i<=max; i++)
            {
                if(count[i]>nn)
                {
                    nn=count[i];
                    cc=1;
                    val=i;
                }
            }
            sort(count,count+max+1);
        }
        if(cc==1&&count[max]!=count[max-1])
            cout<<"The jumping champion is "<<val<<endl;
        else
            cout<<"No jumping champion"<<endl;
    }
    return 0;
}
