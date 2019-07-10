#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[1000],st1[110];
    long long arr[50],i,j,n,T,arr1[110],k,max,P;
    arr[0]=1;
    arr[1]=2;
    for(i=2; i<=45; i++) arr[i]=arr[i-1]+arr[i-2];
    cin>>T;
    while(T--)
    {
        max=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr1[i];
            if(arr1[i]>max) max=arr1[i];
        }
        getchar();
        gets(st);
        k=0;
        for(i=0; i<strlen(st); i++)
        {
            if(st[i]>=65&&st[i]<=90)
                st1[k++]=st[i];
        }
        st1[k]='\0';
        P=0;
        for(i=0; arr[i]<=max; i++)
        {
            for(j=0; j<n; j++)
            {
                if(arr[i]==arr1[j])
                {
                    cout<<st1[j];
                    P=1;
                    break;
                }
                else P=0;
            }
            if(P==0) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
