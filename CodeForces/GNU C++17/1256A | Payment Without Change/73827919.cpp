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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll temp=d/c;
    if(temp>a)
    {
        temp=a*c;
        d-=temp;
        if(d>b)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }else
    {
        d=d%c;
        if(d>b)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    }
}