#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sortof(x) sort((x).begin(),(x).end())
#define debug(x) cout << #x << " === " << x << endl;
#define nl <<"\n"
signed main()
{
    int n;
    cin>>n;
    ll sum=0;
    int ar[n];
    for(int i=0; i<n; i++)
        cin>>ar[i],sum+=ar[i];
    sort(ar,ar+n);
    if(sum%2==0 and ((sum-ar[n-1])>=ar[n-1]))
        cout<<"YES" nl;
    else
        cout<<"NO" nl;
}