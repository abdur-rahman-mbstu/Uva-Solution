#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000][100],str1[100];
    int i,d,n,T,arr[1000],l;
    cin>>T;
    for(int t=1; t<=T; t++)
    {
        cin>>n;
        l=0;
        getchar();
        for(i=0; i<n; i++)
            scanf("%s %d",str[i],&arr[i]);
        cin>>d;
        getchar();
        scanf("%s",str1);
        printf("Case %d: ",t);
        for(i=0; i<n; i++)
        {
            if(strcmp(str1,str[i])==0)
            {
                if(arr[i]<=d)
                {
                    printf("Yesss\n");
                    l=1;
                    break;
                }
                else if(arr[i]<=d+5)
                {
                    l=1;
                    printf("Late\n");
                    break;
                }
            }
        }
        if(l==0)
            printf("Do your own homework!\n");
    }
    return 0;
}
