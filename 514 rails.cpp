#include<bits/stdc++.h>
using namespace std;
stack<long long >s;
long long a[1005];
priority_queue<long long>pq;
int main()
{
    long long i,n,dd;
    while(cin>>n)
    {
        if(n==0)
            break;
        while(cin>>a[0])
        {
            while(!s.empty())
                s.pop();
            while(!pq.empty())
                pq.pop();
            if(a[0]==0)
            {
                cout<<endl;
                break;
            }
            for(i=1; i<n; i++)
                cin>>a[i];
            if(a[0]>1)
            {
                for(i=1; i<a[0]; i++)
                    s.push(i);
            }
            for(i=1; i<n; i++)
            {
                pq.push(a[i-1]);
                dd=pq.top();
                for(int e=dd+1; e<a[i]; e++)
                    s.push(e);
                if(s.size()>0)
                {
                    if(s.top()==a[i])
                        s.pop();
                }
            }
            if(s.empty())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
