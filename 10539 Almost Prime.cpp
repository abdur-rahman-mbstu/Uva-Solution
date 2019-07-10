#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000000000000
map<long long,int>mp;
bool check[1000005];
ll a[100000],alp[85000],q=0;
void prime()
{
    ll i,j,k=0,pp;double p;
    a[k++]=2;
    for(i=3; i<=1000000; i+=2) check[i]=true;
    for(i=3; i<=1000000; i+=2)
    {
        if(check[i]==true)
        {
            for(j=i*i; j<=1000000; j+=i+i) check[j]=false;
        }
    }
    for(i=3; i<=1000000; i+=2) if(check[i]==true) a[k++]=i;
    for(i=0; i<k; i++)
    {
        p=a[i];
        while(1)
        {
            p*=a[i];
            //cout<<p<<" ";
            if(p>=mx) break;
            else
            {
                pp=p;
                if(mp[pp]==0) alp[q++]=pp;
                mp[pp]=1;
            }
        }
    }
    sort(alp,alp+q);
}
int main()
{
    prime();
    ll n,m,i,j,aa,bb,T;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        aa=lower_bound(alp,alp+q,n)-alp;
        bb=upper_bound(alp,alp+q,m)-alp;

        cout<<bb-aa<<endl;
    }
    return 0;
}
