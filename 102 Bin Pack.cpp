#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,p,q,i,j,b1,b2,b3,g1,g2,g3,c1,c2,c3,a[8],mn;
    map<int,string>mp;
    mp[1]="BCG";
    mp[2]="BGC";
    mp[3]="CBG";
    mp[4]="CGB";
    mp[5]="GBC";
    mp[6]="GCB";
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
    {
        mn = LONG_LONG_MAX;
        a[1] = b2+b3+g1+c1+g2+c3;
        if(a[1]<mn)
        {
            mn=a[1];
            p = 1;
        }
        a[2] = b2+b3+g1+c1+g3+c2;
        if(a[2]<mn)
        {
            mn=a[2];
            p = 2;
        }
        a[3] = c2+c3+g1+b1+g2+b3;
        if(a[3]<mn)
        {
            mn=a[3];
            p = 3;
        }
        a[4] = c2+c3+g1+b1+g3+b2;
        if(a[4]<mn)
        {
            mn=a[4];
            p = 4;
        }
        a[5] = g2+g3+b1+c1+c2+b3;
        if(a[5]<mn)
        {
            mn=a[5];
            p = 5;
        }
        a[6] = g2+g3+b1+c1+c3+b2;
        if(a[6]<mn)
        {
            mn=a[6];
            p = 6;
        }
        //cout<<mn<<" "<<p<<endl;
        cout<<mp[p]<<" "<<mn<<endl;
    }
}
