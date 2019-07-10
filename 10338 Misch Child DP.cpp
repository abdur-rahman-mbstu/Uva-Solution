#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll dp[100];
ll fact(ll n)
{
    ll ff,i;
    if(n==0) return dp[0]=1;
    if(dp[n]==0) dp[n]=n*fact(n-1);
    return dp[n];
}
int main()
{
    char st[100];
    ll n,LL,count[30],i,j,sum,T,t;
    cin>>T;
    getchar();
    for(t=1; t<=T; t++)
    {
        scanf("%s",st);
        memset(count,0,sizeof(count));
        LL=strlen(st);
        n=fact(LL);
        //cout<<n<<endl;
        for(i=0; i<LL; i++)
        {
            if(st[i]>='A'&&st[i]<='Z') count[st[i]-'A']++;
            else count[st[i]-'a']++;
        }
        sum=1;
        for(i=0; i<26; i++)
        {
            if(count[i]>=1)
                sum=sum*fact(count[i]);
        }
        printf("Data set %llu: %llu\n",t,(n/sum));
    }
    return 0;
}
