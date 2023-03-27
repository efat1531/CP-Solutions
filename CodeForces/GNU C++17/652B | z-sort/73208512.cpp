#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    vector<int>v;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
 
    }
    sort(v.begin(),v.end());
    ll x=0,y=v.size()-1;
    for(int i=1;i<=v.size();i++)
    {
        if(i%2==0)cout<<v[y]<<" ",y--;
        else cout<<v[x]<<" ",x++;
    }
 
}