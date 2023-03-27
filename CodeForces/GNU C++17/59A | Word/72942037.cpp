#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1=s;
    int l=0,u=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            l++;
            s[i]='A'+s[i]-'a';
        }else if(s[i]>='A'&&s[i]<='Z')
        {
            u++;
            s1[i]='a'+s[i]-'A';
        }
    }
    if(u>l)cout<<s;
    else cout<<s1;
 
}