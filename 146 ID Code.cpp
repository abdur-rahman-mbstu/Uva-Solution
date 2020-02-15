#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int i,j,n,p;
    while(cin>>s)
    {
        if(strcmp(s,"#")==0) break;
        p=strlen(s);
        if(next_permutation(s,s+p)) cout<<s<<endl;
        else cout<<"No Successor"<<endl;
    }
    return 0;
}
