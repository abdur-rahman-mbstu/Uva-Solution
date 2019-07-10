#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[50],i,j,n,m,T,p,q=0,sm,cst[40],nn,mm,t=1;
    cin>>T;
    while(T--)
    {
        if(q==1) cout<<endl; q=1;
        long long mx=0,rm,mn=INT_MAX;;
        for(i=0; i<36; i++) cin>>a[i];
        cin>>n;
        cout<<"Case "<<t++<<":"<<endl;
        while(n--)
        {
            mn=INT_MAX;
            cin>>m;
            for(i=2; i<=36; i++)
            {
                sm=0;
                mm=m;
                if(mm==0) sm+=a[0];
                while(mm!=0)
                {
                    rm=mm%i;
                    mm/=i;
                    sm+=a[rm];
                }
                mn=min(sm,mn);
                cst[i]=sm;
            }
            //cout<<mn<<endl;
            printf("Cheapest base(s) for number %lld:",m);
            for(i=2; i<=36; i++)
            {
                if(cst[i]==mn) cout<<" "<<i;
                //cout<<cst[i]<<" "; cout<<endl;
            }
            cout<<endl;
            /*for(i=mx+1; i<=36; i++)
            {
                //if(cst[i]==mn) cout<<" "<<i;
                cout<<cst[i]<<" "; //cout<<endl;
            }
            cout<<endl;*/

        }
    }
    return 0;
}
