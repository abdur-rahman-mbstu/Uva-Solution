#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[10],s2[10],s3[10],s4[10];
    int n,m,sum,sum1,T,i,a[10];
    cin>>T;
    getchar();
    while(T--)
    {
        sum1=0;
        scanf("%s %s %s %s",s1,s2,s3,s4);
          a[0]=(s1[0]-'0')*2;
          a[1]=(s1[2]-'0')*2;
          a[2]=(s2[0]-'0')*2;
          a[3]=(s2[2]-'0')*2;
          a[4]=(s3[0]-'0')*2;
          a[5]=(s3[2]-'0')*2;
          a[6]=(s4[0]-'0')*2;
          a[7]=(s4[2]-'0')*2;
          sum=s1[1]-'0'+s1[3]-'0'+s2[1]-'0'+s2[3]-'0'+s3[1]-'0'+s3[3]-'0'+s4[1]-'0'+s4[3]-'0';
          for(i=0;i<8;i++)
          {
              n=a[i];
              while(n!=0)
              {
                  m=n%10;
                  sum1+=m;
                  n/=10;
              }
          }
          int p=sum+sum1;
          if(p%10==0)
            cout<<"Valid"<<endl;
          else
            cout<<"Invalid"<<endl;
    }
    return 0;
}
