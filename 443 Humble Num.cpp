#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,na2,na3,na5,na7,hmbl[5845],a2=1,a3=1,a5=1,a7=1;
    hmbl[1]=1;
    for(i=2;i<=5844;i++)
    {
        na2=hmbl[a2]*2;
        na3=hmbl[a3]*3;
        na5=hmbl[a5]*5;
        na7=hmbl[a7]*7;
        if(na2<=na3&&na2<=na5&&na2<=na7)
        {
            hmbl[i]=na2;a2++;
        }
        if(na3<=na2&&na3<=na5&&na3<=na7)
        {
            hmbl[i]=na3;a3++;
        }
        if(na5<=na2&&na5<=na3&&na5<=na7)
        {
            hmbl[i]=na5;a5++;
        }
        if(na7<=na3&&na7<=na5&&na7<=na2)
        {
            hmbl[i]=na7;a7++;
        }
    }
    //for(i=1;i<=10;i++) cout<<hmbl[i]<<" ";
    while(cin>>n&&n)
    {
        if(n%100>=10&&n%100<=19) printf("The %lldth humble number is %lld.\n",n,hmbl[n]);
        else if(n%10==1) printf("The %lldst humble number is %lld.\n",n,hmbl[n]);
        else if(n%10==2) printf("The %lldnd humble number is %lld.\n",n,hmbl[n]);
        else if(n%10==3) printf("The %lldrd humble number is %lld.\n",n,hmbl[n]);
        else printf("The %lldth humble number is %lld.\n",n,hmbl[n]);
    }
    return 0;
}
