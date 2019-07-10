#include<bits/stdc++.h>
using namespace std;
long long k=0,a[15];
int prime[12]={2,3,5,7,11,13,17,19,23,29};
void cal()
{
    memset(a,0,sizeof(a));
    long long sum=0,j,i,n;
    for(i=2; i<=19; i++)
    {
        sum=0;
        n=pow(2,(i-1))*(pow(2,i)-1);
        for(j=2; j*j<=n; j++)
        {
            if(n%j==0)
                sum+=j+(n/j);
        }
        if(sum+1==n)
            a[i]=n;
    }
}
int main()
{
    cal();
    int n,i;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n==31)
        {
            cout<<"Perfect: 2305843008139952128!"<<endl;
            continue;
        }
          if(a[n]>0)
            cout<<"Perfect: "<<a[n]<<"!"<<endl;
          else
          {
              int p=0;
              for(i=0;i<11;i++)
              {
                  if(n==prime[i])
                  {
                      p=1;
                      break;
                  }
              }
              if(p==1)
                cout<<"Given number is prime. But, NO perfect number is available."<<endl;
              else
                cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
          }
    }
    return 0;
}
