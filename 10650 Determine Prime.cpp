#include<bits/stdc++.h>
using namespace std;
int a[3500],k=0;
bool check[32005];
vector<int>v[500];
void sieve()
{
    int i,j,dif=0,cnt=0,p=0,q;
    for(i=3; i<=32000; i+=2) check[i]=true;
    for(i=3; i*i<=32000; i+=2)
    {
        if(check[i]==true)
        {
            for(j=i*i; j<=32000; j+=i+i) check[j]=false;
        }
    }
    a[k++]=2;
    for(i=3; i<=32000; i+=2)
    {
        if(check[i]==true) a[k++]=i;
    }
    //cout<<k<<" "<<a[k-1]<<endl;
    for(i=0; i<k-1; i++)
    {
        if(a[i+1]-a[i]==dif) cnt++;
        else
        {
            if(cnt>=3)
            {
                v[p].push_back(a[i]);
                q=a[i];
                for(j=2; j<=cnt; j++)
                {
                    q=q-dif;
                    v[p].push_back(q);
                }
                p++;
                //cout<<p<<" ";
            }
            dif=a[i+1]-a[i];
            cnt=2;
        }
    }
    /*for(i=0; i<p; i++)
    {
        for(j=0; j<v[i].size(); j++) cout<<v[i][j]<<" ";
        cout<<endl;
    }*/
}
int main()
{
    sieve();
    int n,m,i,j,sz,kk;
    while(cin>>n>>m)
    {
        if(n>m) swap(n,m);
        if(n==0&&m==0) break;
        for(i=0; i<162; i++)
        {
            sz=v[i].size();
            if(v[i][0]>m) break;
            if(sz==3)
            {
                if(v[i][0]<=m&&v[i][sz-1]>=n)
                    for(j=2; j>=0; j--)
                    {
                        if(j!=0) cout<<v[i][j]<<" ";
                        else cout<<v[i][j]<<endl;
                    }
            }
            else if(sz==4)
            {
                if(v[i][0]<=m&&v[i][sz-1]>=n)
                {
                    for(j=3; j>=0; j--)
                    {
                        if(j!=0) cout<<v[i][j]<<" ";
                        else cout<<v[i][j]<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
