#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,p,q,T,a[100];
    cin>>T;
    while(T--)
    {
        q=0;
        cin>>n;
        if(n<10)
        {
            cout<<n<<endl;
            continue;
        }
        p=9;
        while(p>1)
        {
            while(n%p==0)
            {
                a[q++]=p;
                n/=p;
            }
            p--;
        }
        if(n!=1) cout<<-1<<endl;
        else
        {
            sort(a,a+q);
            for(int i=0;i<q;i++) cout<<a[i];
            cout<<endl;
        }
    }
    return 0;
}
