#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,a[10000];
    double ups,dns;
    while(cin>>a[0]&&a[0])
    {
        int k=1,up=0,dn=0,upt=0,dnt=0,p=0,q=0,eq=0,upv=0,dnv=0,eqv=0;
        while(1)
        {
            cin>>m;
            if(m==0) break;
            a[k++]=m;
        }
        for(i=1; i<k; i++)
        {
            if(a[i]>a[i-1])
            {
                upt++;
                upt+=eq;
                upv=a[i];
                if(p==0) dn++;
                p=1;
                q=0;
                eq=0;
            }
            if(a[i]<a[i-1])
            {
                dnt++;
                dnt+=eq;
                dnv=a[i];
                if(q==0) up++;
                q=1;
                p=0;
                eq=0;
            }
            if(a[i]==a[i-1])
            {
                if(p==1) upt++;
                else if(q==1) dnt++;
                else eq++;
            }
        }
        //cout<<dnt<<" "<<upt<<" "<<up<<" "<<dn<<endl;
        if(dn>0)  ups=upt/(double)dn;
        else ups=0;
        if(up>0) dns=dnt/(double)up;
        else dns=0;
        printf("Nr values = %d:  %.6lf %.6lf\n",k,ups,dns);
    }
    return 0;
}
