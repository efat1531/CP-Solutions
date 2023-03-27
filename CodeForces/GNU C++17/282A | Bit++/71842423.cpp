#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n--)
    {
        string s;
        cin>>s;
        if((s[0]=='+'&&s[1]=='+')||(s[1]=='+'&&s[2]=='+'))
        {
            count++;
        }
        if((s[0]=='-'&&s[1]=='-')||(s[1]=='-'&&s[2]=='-'))
        {
            count--;
        }
    }
    cout<<count;
 
}