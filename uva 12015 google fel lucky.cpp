#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10][100];
    int arr[100],i,j,t,T,max;
    cin>>T;
    getchar();
    for(t=1;t<=T;t++)
    {
        max=-23;
        for(i=0;i<10;i++)
        {
            scanf("%s %d",str[i],&arr[i]);
            if(arr[i]>max)
                max=arr[i];
        }
        printf("Case #%d:\n",t);
        for(i=0;i<10;i++)
        {
            if(arr[i]==max)
                printf("%s\n",str[i]);
        }
    }
    return 0;
}
