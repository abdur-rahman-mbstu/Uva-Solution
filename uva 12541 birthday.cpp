#include<bits/stdc++.h>
using namespace std;
struct info
{
    int day,month,year,pos;
} in[105];
bool cmp(info a,info b)
{
    if(a.year==b.year)
    {
        if(a.month==b.month)
            return (a.day<b.day);
        else return (a.month<b.month);
    }
    return a.year<b.year;
}
int main()
{
    char st[105][20];
    int ll,i,j,n,p,da[105],mo[105],ye[105],q;
    while(cin>>n)
    {
        getchar();
        for(i=0; i<n; i++)
            scanf("%s %d%d%d",st[i],&da[i],&mo[i],&ye[i]);
        for(i=0; i<n; i++)
        {
            in[i].day=da[i];
            in[i].month=mo[i];
            in[i].year=ye[i];
            in[i].pos=i;
        }
        sort(in,in+n,cmp);
        for(i=0; i<n; i++)
         printf("%d %d %d %d\n",in[i].day,in[i].month,in[i].year,in[i].pos);
        p=in[0].pos;
        q=in[n-1].pos;
        printf("%s\n%s\n",st[q],st[p]);
    }
    return 0;
}
