#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[100005],st1[100005],st2[100005],st3[100005],st4[100005],st5[100005];
    long i,n,T,p,ll,s[100005],LL,boro,a,b,c;
    cin>>T;
    getchar();
    while(T--)
    {
        long k=0,j=0,ca=0,z=0,w=0,pp=0,qq=0,tt=0,ss=0,aa=0,cc=0;
        p=0;
        memset(st,0,sizeof(st));
        memset(st1,0,sizeof(st1));
        scanf("%s %s",st4,st5);
        for(i=0; st4[i]!='\0'; i++)
        {
            if(st4[i]=='0'&&cc==0)
                continue;
            st[aa++]=st4[i];
            cc=1;
        }
        for(i=0; st5[i]!='\0'; i++)
        {
            if(st5[i]=='0'&&ss==0)
                continue;
            st1[tt++]=st5[i];
            ss=1;
        }
        ll=strlen(st);
        LL=strlen(st1);
        if(ll==0)
        {
            st[0]='0';
            ll=1;
        }
        if(LL==0)
        {
            st1[0]='0';
            LL=1;
        }
        //puts(st); puts(st1);
        if(ll>LL)
            boro=ll;
        else
            boro=LL;
        if(ll==LL)
        {
            for(i=0; i<ll; i++)
            {
                int f=(st[i]-'0')-(st1[i]-'0');
                if(f>0)
                {
                    pp=1;
                    break;
                }
                else if(f<0)
                {
                    qq=1;
                    break;
                }
                else
                    p++;
            }
        }
        if(p==ll)
        {
            cout<<"0"<<endl;
            continue;
        }
        for(i=ll-1; i>=0; i--)
            st2[k++]=st[i];
        st2[k]='\0';
        for(i=LL-1; i>=0; i--)
            st3[j++]=st1[i];
        st3[j]='\0';
        if(ll==LL)
        {
            if(pp==1)
            {
                for(i=0; i<ll; i++)
                {
                    a=st2[i]-'0';
                    b=st3[i]-'0'+ca;
                    if(a<b)
                    {
                        a+=10;
                        ca=1;
                    }
                    else
                        ca=0;
                    c=a-b;
                    // cout<<a<<" "<<b<<" "<<c<<endl;
                    s[z++]=c;
                }
            }
            else if(qq==1)
            {
                cout<<"-";
                for(i=0; i<LL; i++)
                {
                    a=st3[i]-'0';
                    b=st2[i]-'0'+ca;
                    if(a<b)
                    {
                        a+=10;
                        ca=1;
                    }
                    else
                        ca=0;
                    c=a-b;
                    //cout<<a<<" "<<b<<" "<<c<<endl;
                    s[z++]=c;
                }
            }
        }
        else if(boro==ll)
        {
            for(i=0; i<ll; i++)
            {
                a=st2[i]-'0';
                b=st3[i]-'0'+ca;
                if(i>=LL)
                    b=0+ca;
                if(a<b)
                {
                    a+=10;
                    ca=1;
                }
                else
                    ca=0;
                c=a-b;
                // cout<<a<<" "<<b<<" "<<c<<endl;
                s[z++]=c;
            }
        }
        else if(boro==LL)
        {
            cout<<"-";
            for(i=0; i<LL; i++)
            {
                a=st3[i]-'0';
                b=st2[i]-'0'+ca;
                if(i>=ll)
                    b=0+ca;
                if(a<b)
                {
                    a+=10;
                    ca=1;
                }
                else
                    ca=0;
                c=a-b;
                //cout<<a<<" "<<b<<" "<<c<<endl;
                s[z++]=c;
            }
        }
        for(i=z-1; i>=0; i--)
        {
            if(s[i]==0&&w==0)
                continue;
            cout<<s[i];
            w=1;
        }
        cout<<endl;
    }
    return 0;
}
