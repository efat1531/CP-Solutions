#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    string s;
    bool b=0,g=0;
    cin>>s;
    for(int i=0;i<(s.size()+1)/2;i++)
    {
        if(s[i]!=s[s.size()-1-i]&&b==0)s[s.size()-i-1]=s[i],b=1;
        else if(b==1&&s[i]!=s[s.size()-i-1])
        {
            g=1;
            break;
        }else if(b==0&&(i==s.size()-1-i))b=1;
    }
    if(g==1||b==0)cout<<"NO";
    else cout<<"YES";
}