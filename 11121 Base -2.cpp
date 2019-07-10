#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    long long n,m,i,j=1,p,q,T;
    cin>>T;
    while(T--)
    {

        q=0;
        cin>>n;
        cout<<"Case #"<<j++<<": ";
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        while(n!=0)
        {
            p=n%-2;
            n/=-2;
            if(p<0)
            {
                n+=1;
                p+=2;
            }
            a[q++]=p;
        }
        for(i=q-1;i>=0;i--) cout<<a[i];
        cout<<endl;
    }
    return 0;
}
