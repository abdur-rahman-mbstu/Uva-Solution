#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000],arr1[1000],i,T,n,j;
    cin>>T;
    while(T--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>arr[i];
        for(i=0; i<n; i++)
            cin>>arr1[i];
        for(i=0; i<n; i++)
        {
            if(arr[i]==1&&arr1[i]==1)
                cout<<'.';
            if(arr[i]==1&&arr1[i]==2)
                cout<<',';
            if(arr[i]==1&&arr1[i]==3)
                cout<<'?';
            if(arr[i]==1&&arr1[i]==4)
                cout<<'"';
            if(arr[i]==2&&arr1[i]==1)
                cout<<'a';
            if(arr[i]==2&&arr1[i]==2)
                cout<<'b';
            if(arr[i]==2&&arr1[i]==3)
                cout<<'c';
            if(arr[i]==3&&arr1[i]==1)
                cout<<'d';
            if(arr[i]==3&&arr1[i]==2)
                cout<<'e';
            if(arr[i]==3&&arr1[i]==3)
                cout<<'f';
            if(arr[i]==4&&arr1[i]==1)
                cout<<'g';
            if(arr[i]==4&&arr1[i]==2)
                cout<<'h';
            if(arr[i]==4&&arr1[i]==3)
                cout<<'i';
            if(arr[i]==5&&arr1[i]==1)
                cout<<'j';
            if(arr[i]==5&&arr1[i]==2)
                cout<<'k';
            if(arr[i]==5&&arr1[i]==3)
                cout<<'l';
            if(arr[i]==6&&arr1[i]==1)
                cout<<'m';
            if(arr[i]==6&&arr1[i]==2)
                cout<<'n';
            if(arr[i]==6&&arr1[i]==3)
                cout<<'o';
            if(arr[i]==7&&arr1[i]==1)
                cout<<'p';
            if(arr[i]==7&&arr1[i]==2)
                cout<<'q';
            if(arr[i]==7&&arr1[i]==3)
                cout<<'r';
            if(arr[i]==7&&arr1[i]==4)
                cout<<'s';
            if(arr[i]==8&&arr1[i]==1)
                cout<<'t';
            if(arr[i]==8&&arr1[i]==2)
                cout<<'u';
            if(arr[i]==8&&arr1[i]==3)
                cout<<'v';
            if(arr[i]==9&&arr1[i]==1)
                cout<<'w';
            if(arr[i]==9&&arr1[i]==2)
                cout<<'x';
            if(arr[i]==9&&arr1[i]==3)
                cout<<'y';
            if(arr[i]==9&&arr1[i]==4)
                cout<<'z';
            if(arr[i]==0&&arr1[i]==1)
                cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}
