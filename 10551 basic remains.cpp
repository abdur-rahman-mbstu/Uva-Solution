#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
void convert(long long n, long long b)
{
    long long i=0,j;
    while(n!=0)
    {
        a[i++]=n%b;
        n/=b;
    }
    for(j=i-1; j>=0; j--)
        cout<<a[j];
    cout<<endl;
}
long long power(long long v,long long n,long long nn)
{
    long long i,ans=1;
    for(i=1; i<=n; i++)
        ans=(ans*v)%nn;
    return ans;
}
int main()
{
    char p[1005];
    long long b,m,i,j,ll,n,nn,mm,k,rem,h;
    while(cin>>b)
    {
        long long k=0,n=0,nn=0,mm=0,j=0;
        if(b==0) break;
        scanf("%s %lld",p,&m);
        ll=strlen(p);
        if(b==10)
        {
            for(i=0; i<ll; i++)
            {
                n=n*10+p[i]-'0';
                n=n%m;
            }
            cout<<n<<endl;
        }
        else
        {
            while(m!=0)
            {
                rem=m%10;
                m/=10;
                nn=nn+rem*pow(b,k);
                k++;
            }
            //cout<<nn<<endl;
            for(i=ll-1; i>=0; i--)
            {
                h=p[i]-'0';
                mm=mm+h*power(b,j,nn);
                //mm%=nn;
                j++;
            }
            mm=mm%nn;
            //cout<<mm<<endl;
            if(mm==0)  cout<<"0"<<endl;
            else  convert(mm,b);
        }
    }
    return 0;
}
