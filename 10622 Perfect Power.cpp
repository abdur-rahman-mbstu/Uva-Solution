#include<bits/stdc++.h>
using namespace std;
#define MX 46400
#define ll long long
ll a[4800],k=0;
bool check[46405];
void sieve()
{
    ll i,j;
    for(i=3; i<=MX; i+=2) check[i]=true;
    for(i=3; i*i<=MX; i+=2)
    {
        if(check[i]==true)
        {
            for(j=i*i; j<=MX; j+=i+i) check[j]=false;
        }
    }
    a[k++]=2;
    for(i=3; i<=MX; i+=2)
    {
        if(check[i]==true) a[k++]=i;
    }
    //cout<<k<<endl;
}
vector<int>v;
int main()
{
    sieve();
    //freopen("10622in.txt","r",stdin);
    //freopen("10622out.txt","w",stdout);
    ll n,m,q,i,j,c,ans;
    int p;
    while(cin>>m&&m)
    {
        if(m<0) n=-m;
        else n=m;
        v.clear();
        for(i=0; a[i]*a[i]<=n; i++)
        {
            c=0;
            while(n%a[i]==0)
            {
                c++;
                n/=a[i];
            }
            if(c>0) v.push_back(c);
        }
        if(n!=1) v.push_back(1);
        q=v.size();
        p=v[0];

        //for(i=0; i<q; i++) cout<<v[i]<<" ";
        //cout<<endl;
        for(i=1; i<q; i++)
        {
            p=__gcd(p,v[i]);
        }
        //cout<<p<<endl;
        if(m>0) cout<<p<<endl;
        else
        {
            if(p&1) cout<<p<<endl;
            else
            {
                while(p%2==0)
                {
                    p/=2;
                }
                cout<<p<<endl;
            }
        }
    }
    return 0;
}
