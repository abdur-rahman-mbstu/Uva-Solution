#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,na2,na3,na5,na7,hmbl[1505],a2=1,a3=1,a5=1,a7=1;
    hmbl[1]=1;
    for(i=2;i<=1500;i++)
    {
        na2=hmbl[a2]*2;
        na3=hmbl[a3]*3;
        na5=hmbl[a5]*5;
        if(na2<=na3&&na2<=na5)
        {
            hmbl[i]=na2;a2++;
        }
        if(na3<=na2&&na3<=na5)
        {
            hmbl[i]=na3;a3++;
        }
        if(na5<=na2&&na5<=na3)
        {
            hmbl[i]=na5;a5++;
        }
    }
   // for(i=1;i<=20;i++) cout<<hmbl[i]<<" ";
    printf("The 1500'th ugly number is %lld.\n",hmbl[1500]);
    return 0;
}
