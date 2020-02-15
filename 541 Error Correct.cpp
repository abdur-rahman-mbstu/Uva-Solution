#include<bits/stdc++.h>
using namespace std;
int main()
{
    int clm[110],rw[110],in[110][110],n,i,j;
    while(cin>>n&&n)
    {
        int x,y,rww=0,cl=0,s;
        for(i=1;i<=n;i++) for(j=1;j<=n;j++) cin>>in[i][j];
        for(i=1;i<=n;i++)
        {
            s=0;
            for(j=1;j<=n;j++)
            s+=in[i][j];
            clm[i]=s;
        }
        for(i=1;i<=n;i++)
        {
            s=0;
            for(j=1;j<=n;j++)
            s+=in[j][i];
            rw[i]=s;
        }
        for(i=1;i<=n;i++)
        {
            if(clm[i]%2!=0)
            {
                cl++;
                x=i;
            }
            if(rw[i]%2!=0)
            {
                rww++;
                y=i;
            }
        }
        if(cl==0&&rww==0) cout<<"OK"<<endl;
        else if(cl==1&&rww==1) printf("Change bit (%d,%d)\n",x,y);
        else cout<<"Corrupt"<<endl;
    }
    return 0;
}
