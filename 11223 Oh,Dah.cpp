#include<bits/stdc++.h>
using namespace std;
vector<char>v;
map<string,char>mp;
int main()
{
    string s,s1,s2;
    int i,j,sz,p=0,T,t=1;
    mp[".-"]='A';
    mp["-..."]='B';
    mp["-.-."]='C';
    mp["-.."]='D';
    mp["."]='E';
    mp["..-."]='F';
    mp["--."]='G';
    mp["...."]='H';
    mp[".."]='I';
    mp[".---"]='J';
    mp["-.-"]='K';
    mp[".-.."]='L';
    mp["--"]='M';
    mp["-."]='N';
    mp["---"]='O';
    mp[".--."]='P';
    mp["--.-"]='Q';
    mp[".-."]='R';
    mp["..."]='S';
    mp["-"]='T';
    mp["..-"]='U';
    mp["...-"]='V';
    mp[".--"]='W';
    mp["-..-"]='X';
    mp["-.--"]='Y';
    mp["--.."]='Z';
    mp["-----"]='0';
    mp[".----"]='1';
    mp["..---"]='2';
    mp["...--"]='3';
    mp["....-"]='4';
    mp["....."]='5';
    mp["-...."]='6';
    mp["--..."]='7';
    mp["---.."]='8';
    mp["----."]='9';
    mp[".-.-.-"]='.';
    mp["--..--"]=',';
    mp["..--.."]='?';
    mp[".----."]=39;
    mp["-.-.--"]='!';
    mp["-..-."]='/';
    mp["-.--."]='(';
    mp["-.--.-"]=')';
    mp[".-..."]='&';
    mp["---..."]=':';
    mp["-.-.-."]=';';
    mp["-...-"]='=';
    mp[".-.-."]='+';
    mp["-....-"]='-';
    mp["..--.-"]='_';
    mp[".-..-."]='"';
    mp[".--.-."]='@';
    cin>>T;
    getchar();
    while(T--)
    {
        j=0;
        v.clear();
        s1.clear();
        getline(cin,s);
        sz=s.size();
        if(p==1) cout<<endl;
        p=1;
        s.push_back(' ');
        printf("Message #%d\n",t++);
        for(i=0; i<=sz; i++)
        {
            if(s[i]!=' ') s1.push_back(s[i]);
            else
            {
                if(s1.size()==0) v.push_back(' ');
                else v.push_back(mp[s1]);
                s1.clear();
            }
        }
        while(j==0)
        {
            if(v[0]==' ') v.erase(v.begin());
            else j=1;
        }
        j=0;
        int ln = v.size();
        while(j==0)
        {
            if(v[v.size()-1]==' ') v.erase(v.end()-1);
            else j=1;
        }
        for(i=0; i<v.size(); i++) cout<<v[i];
        cout<<endl;
    }
    return 0;
}
