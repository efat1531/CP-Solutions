#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ull a,b;
    cin>>a>>b;
    ull c=a-b;
    if(c>1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}