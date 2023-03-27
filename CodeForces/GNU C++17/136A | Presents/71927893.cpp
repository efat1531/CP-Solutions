#include <bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main() {
    ll balamr[110];
    ll n,e;
    //Abbe Hala size n
    cin>>n;
    ll baal[n+10];
    for (ll i = 0; i < n; i++) {
        cin>>baal[i];
    }
    //logic amar baal er logic atto hard ken 700  tag er problem baal amar
    for (ll i = 0; i < n;i++) {
        balamr[baal[i]]=i+1;
    }
    for (ll i = 1; i <= n; i++) {
        cout<<balamr[i]<<" ";
    }
    return 0;
}