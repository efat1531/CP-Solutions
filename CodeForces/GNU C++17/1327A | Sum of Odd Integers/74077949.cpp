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
    ll n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k%2==0)
        {
            if(n/k>=k)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;
    }else
    {
        if(k%2!=0)
        {
            if(n/k>=k)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;
    }
    }
}