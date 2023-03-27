#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,a=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]='a'+(s[i]-'A');
        }
    }
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i-1])a++;
    }
    if(a>=26)cout<<"YES";
    else cout<<"NO";
}