#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " <<x<<endl;
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.size()-1;)
    {
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='A')c++,i+=3;
        else if(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='B')c++,i+=3;
        else if(s[i]=='A'&&s[i+1]=='B')a++,i+=2;
        else if(s[i]=='B'&&s[i+1]=='A')b++,i+=2;
        else i++;
    }
    if(a>0&&(b>0||c>0))cout<<"Yes";
    else if(b>0&&(a>0||c>0))cout<<"Yes";
    else if(c>=2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}