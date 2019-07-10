#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[10],st2[10];
    int i,cc,arr[105],n,T,m;
    cin>>T;
    while(T--)
    {
        cc=0;
        cin>>n;
        getchar();
        for(i=0;i<n;i++)
        {
            scanf("%s",st);
            if(strcmp(st,"RIGHT")==0)
            {
                cc++;
                arr[i]=1;
            }
            else if(strcmp(st,"LEFT")==0)
            {
                cc--;
                arr[i]=-1;
            }
            else
            {
                scanf("%s%d",st2,&m);
                arr[i]=arr[m-1];
                cc+=arr[i];
            }
        }
        cout<<cc<<endl;
    }
    return 0;
}
