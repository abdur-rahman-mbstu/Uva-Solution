#include<bits/stdc++.h>
using namespace std;
#define mx 32005
vector<int>v[200];
int a[3500],k=0,status[(mx/32)+2];
bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
void sieve()
{
    int dif=0,cnt=0,p=0,i,j,sqrtN,q;
    sqrtN = int( sqrt( mx ) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= mx; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31);
            }
        }
    }
    a[k++]=2;
    for(i=3; i<=mx; i+=2) if( Check(status[i>>5],i&31)==0) a[k++]=i;
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
            if(sz==3) kk=2;
            else if(sz==4) kk=3;
            if(v[i][0]<=m&&v[i][sz-1]>=n)
                for(j=kk; j>=0; j--)
                {
                    if(j!=0) cout<<v[i][j]<<" ";
                    else cout<<v[i][j]<<endl;
                }
        }
    }
    return 0;
}

