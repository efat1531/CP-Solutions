// Author - Sp3cTer
// Date   - 11 - 12 - 2022
// Time   - 21 - 35
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef unsigned long long l1;
typedef double db;
#define pi 2 * acos(0.0)
#define sz(x) (x).size()
#define read(x)                                                                \
  int x;                                                                       \
  cin >> x
#define prDouble(x, y) fixed << setprecision(y) << x
#define lcm(a, b) (a * b) / __gcd(a, b);
#define sortof(x) sort((x).begin(), (x).end());
#define fast_io                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)
#define mm(x, v) memset((x), v, sizeof(x));
#define testcase(t, x)                                                         \
  int t;                                                                       \
  cin >> t;                                                                    \
  for (int x = 1; x <= t; x++)
#define nl << "\n"
 
void solve() {
    testcase(tt,t){
 ll n;
 cin>>n;
 map<ll,ll>mp;
 ll ar[n];
 ll mn=INT_MAX;
 ll mx=INT_MIN;
 for(ll i=0;i<n;i++)
     cin>>ar[i],mp[ar[i]]++,mx=max(ar[i],mx),mn=min(ar[i],mn);
 ll ans=2*mp[mn]*mp[mx];
 if(mp.size()==1)
 {
     cout<<(n*(n-1)) nl;
     continue;
 }
 cout<<ans nl;
 
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}