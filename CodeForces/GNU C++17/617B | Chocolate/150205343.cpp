#include<bits/stdc++.h>
using namespace std;
#define nl <<"\n"
#define db(x) cout<< #x <<" -> "<<x nl;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        if(a&1)
            v.push_back(i);
    }
    ll ans=1;
    if(v.size()==0)
        cout<<0 nl;
    else
    {
        for(ll i=1;i<v.size();i++)
        {
            ans*=(v[i]-v[i-1]);
        }
        cout<< ans nl;
    }
}