#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt[10],p,q,r;
    while(cin>>n&&n)
    {
        memset(cnt,0,sizeof(cnt));
        for(i=1; i<=n; i++)
        {
            p = i;
            q = p%10;
            if(q==4||q==9)
            {
                cnt[1]++;
                if(q==4) cnt[2]++;
                else cnt[3]++;
            }
            else if(q==5) cnt[2]++;
            else
            {
                if(q>5)
                {
                    cnt[2]++;
                    cnt[1]+=(q-5);
                }
                else cnt[1]+=q;
            }
            r = p/10;
            if(r==4||r==9)
            {
                cnt[3]++;
                if(r==4) cnt[4]++;
                else cnt[5]++;
            }
            else if(r==10) cnt[5]++;
            else
            {
                if(r<5) cnt[3]+=r;
                else
                {
                    cnt[4]++;
                    cnt[3]+=(r-5);
                }
            }
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,cnt[1],cnt[2],cnt[3],cnt[4],cnt[5]);
    }
    return 0;
}
