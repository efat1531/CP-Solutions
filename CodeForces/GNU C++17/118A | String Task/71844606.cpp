#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int b=s.size();
    for(int i=0;i<b;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]='a'+(s[i]-'A');
        }
    }
    for(int i=0;i<b;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
            continue;
        }else
        {
            cout<<"."<<s[i];
        }
    }
}