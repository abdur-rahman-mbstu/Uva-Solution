#include<bits/stdc++.h>
using namespace std;
int main()
{
    long i,j,n,c,c1,a[40000];
    double pi;
    while(cin>>n&&n)
    {
        c=0;
        c1=0;
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                c1++;
                if(__gcd(a[i],a[j])==1)
                    c++;
            }
        }
        //cout<<c<<" "<<c1<<endl;
        if(c==0)
        {
            cout<<"No estimate for this data set."<<endl;
            continue;
        }
        pi=sqrt((6.0*c1)/c);
        printf("%lf\n",pi);
    }
    return 0;
}
