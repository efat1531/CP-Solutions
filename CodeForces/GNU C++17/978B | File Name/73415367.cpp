#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n;cin>>n;
    string s;
    cin>>s;
    int g=0;
    for(int i=0;i<s.size()-2;i++)
    {
        if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')g++;
    }
    cout<<g<<endl;
}