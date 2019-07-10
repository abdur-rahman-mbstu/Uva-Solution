#include<bits/stdc++.h>
using namespace std;
int main()
{
    char n[300],m[300],s[900][900],aa[900],x[300],y[300];
    int i,LL,c,ll,a,b,j,k,r=0;
    while(cin>>x>>y)
    {
        int d=0,o=0,ca=0,pp=0;
        r=0;
        for(i=strlen(x)-1; i>=0; i--)
            n[d++]=x[i];
        n[d]='\0';
        for(i=strlen(y)-1; i>=0; i--)
            m[o++]=y[i];
        m[o]='\0';
        ll=strlen(n);
        LL=strlen(m);
        for(i=0; i<ll; i++)
        {
            k=0;
            for(int u=0; u<i; u++)
                s[r][k++]='0';
            for(j=0; j<LL; j++)
            {
                a=(n[i]-'0')*(m[j]-'0')+ca;
                if(a>9)
                {
                    s[r][k++]=a%10+'0';
                    ca=a/10;
                }
                else
                {
                    s[r][k++]=a+'0';
                    ca=0;
                }
            }
            while(ca>0)
            {
                s[r][k++]=ca+'0';
                ca/=10;
            }
            s[r][k]='\0';
            r++;
        }
        //for(i=0; i<r; i++)
        //puts(s[i]);
        int car=0,z=0,sum,nn;
        pp=strlen(s[r-1]);
        for(i=0; i<pp; i++)
        {
            sum=0;
            for(j=0; j<r; j++)
            {
                if(strlen(s[j])>i)
                    nn=s[j][i]-'0';
                else
                    nn=0;
                sum+=nn;
            }
            sum+=car;
            if(sum>9)
            {
                aa[z++]=sum%10+'0';
                car=sum/10;
            }
            else
            {
                aa[z++]=sum+'0';
                car=0;
            }
        }
        while(car>0)
        {
            aa[z++]=car%10+'0';
            car/=10;
        }
        int qq=0;
        for(i=z-1; i>=0; i--)
        {
            if(aa[i]=='0'&&qq==0)
                continue;
            cout<<aa[i];
            aa[i]=0;
            qq=1;
        }
        if(qq==0)
            cout<<"0";
        cout<<endl;
    }
    return 0;
}
