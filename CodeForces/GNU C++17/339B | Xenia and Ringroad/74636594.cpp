#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
int main()
{
    ll n,m,t=0;
    vector<ll>v;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    int p=1;
    for(ll i=0;i<v.size();i++)
    {
        if(v[i]>p)
        {
            t+=v[i]-p;
        }else if(p>v[i])
        {
            t+=(n+(v[i]-p));
        }
        //cout<<i+1<<" "<<t<<" "<<p<<" "<<v[i]<<endl;
        p=v[i];
    }
    cout<<t;
}