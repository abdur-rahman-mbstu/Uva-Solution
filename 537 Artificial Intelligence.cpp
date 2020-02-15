#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000],s1[100],s2[100],s3[100],sm,sm1,sm2;
    double n,m,p,q;
    int i,T,k,j,t=1;
    cin>>T;
    getchar();
    while(T--)
    {
        memset(s2,0,sizeof(s2));
        memset(s3,0,sizeof(s3));
        int k=0,q=0,qq=0,j=0,jj=0,u,kk=0;
        gets(s);
        printf("Problem #%d\n",t++);
        for(i=0; i<strlen(s); i++)
        {
            if(isdigit(s[i])||s[i]=='M'||s[i]=='m'||s[i]=='k'||s[i]=='V'||s[i]=='A'||s[i]=='W'||(s[i]=='.'&&isdigit(s[i+1]))||(s[i]=='-'&&isdigit(s[i+1])))
            {
                if(s[i-1]=='=') kk=1;
                if(kk==1) s1[k++]=s[i];
            }
            else kk=0;
        }
        s1[k]='\0';
        //cout<<s1<<endl;
        int fst = 0,snd = 0;
        for(i=0; i<k; i++)
        {
            if(s1[i]=='-') fst = 1;
            if(isdigit(s1[i])||(s1[i]=='.'&&isdigit(s1[i+1]))) j=1;
            if(j==0) continue;
            if(j==1)
            {
                if(isdigit(s1[i])||(s1[i]=='.')) s2[q++]=s1[i];
                else if((s1[i]=='M'||s1[i]=='m'||s1[i]=='k')&&(s1[i+1]=='V'||s1[i+1]=='W'||s1[i+1]=='A'))
                {
                    s2[q]='\0';
                    n=atof(s2);
                    if(s1[i]=='M') n*=1000000;
                    else if(s1[i]=='m') n/=1000;
                    else if(s1[i]=='k') n*=1000;
                    sm=s1[i+1];
                    i+=2;
                    break;
                }
                else if(s1[i]=='V'||s1[i]=='W'||s1[i]=='A')
                {
                    s2[q]='\0';
                    n=atof(s2);
                    sm=s1[i];
                    i++;
                    break;
                }
            }
        }
        for(u=i; u<k; u++)
        {
            if(s1[u]=='-') snd = 1;
            if(isdigit(s1[u])||(s1[u]=='.'&&isdigit(s1[u+1]))) jj=1;
            if(jj==0) continue;
            if(jj==1)
            {
                if(isdigit(s1[u])||s1[u]=='.') s3[qq++]=s1[u];
                else if((s1[u]=='M'||s1[u]=='m'||s1[u]=='k')&&(s1[u+1]=='V'||s1[u+1]=='W'||s1[u+1]=='A'))
                {
                    s3[qq]='\0';
                    m=atof(s3);
                    if(s1[u]=='M') m*=1000000;
                    else if(s1[u]=='m') m/=1000;
                    else if(s1[u]=='k') m*=1000;
                    sm1=s1[u+1];
                    break;
                }
                else if(s1[u]=='V'||s1[u]=='W'||s1[u]=='A')
                {
                    s3[qq]='\0';
                    m=atof(s3);
                    sm1=s1[u];
                    break;
                }
            }
        }
        //cout<<s2<<" "<<s3<<endl;
        //cout<<n<<" "<<m<<endl;
        if(sm<sm1)
        {
            if(sm=='A'&&(sm1=='W'||sm1=='V'))
            {
                if(sm1=='W')
                {
                    if(n>0&&m>0)
                    {
                        printf("U=");
                        if((fst==1&&snd==0)||(fst==0&&snd==1)) cout<<"-";
                        printf("%.2lfV\n",(m/n));
                    }
                    else printf("U=0.00V\n");
                }
                else
                {
                    printf("P=");
                    if((fst==1&&snd==0)||(fst==0&&snd==1)) cout<<"-";
                    printf("%.2lfW\n",n*m);
                }
            }
            else if(sm=='V'&&sm1=='W')
            {
                if(n>0&&m>0)
                {
                    printf("I=");
                    if((fst==1&&snd==0)||(fst==0&&snd==1)) cout<<"-";
                    printf("%.2lfA\n",(m/n));
                }
                else printf("I=0.00A\n");
            }
        }
        else
        {
            if(sm=='W'&&(sm1=='A'||sm1=='V'))
            {
                if(sm1=='A')
                {
                    if(n>0&&m>0)
                    {
                        printf("U=");
                        if((fst==1&&snd==0)||(fst==0&&snd==1)) cout<<"-";
                        printf("%.2lfV\n",(n/m));
                    }
                    else printf("U=0.00V\n");
                }
                else
                {
                    if(n>0&&m>0)
                    {
                        printf("I=");
                        if((fst==1&&snd==0)||(fst==0&&snd==1)) cout<<"-";
                        printf("%.2lfA\n",(n/m));
                    }
                    else printf("I=0.00A\n");
                }
            }
            else if(sm=='V'&&sm1=='A')
            {
                printf("P=");
                if((fst==1&&snd==0)||(fst==0&&snd==1)) cout<<"-";
                printf("%.2lfW\n",(m*n));
            }
        }
        cout<<endl;
    }
    return 0;
}
