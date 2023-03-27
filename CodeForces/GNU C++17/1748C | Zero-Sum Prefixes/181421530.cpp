// Author - Sp3cTer
// Date   - 18 - 11 - 2022
// Time   - 19 - 22
 
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
    testcase(tt,t)
    {
 int n;
 cin>>n;
 ll ar[n];
 ll pre[n];
 cin>>ar[0];
 pre[0]=ar[0];
 for(int i=1;i<n;i++)
     cin>>ar[i],pre[i]=pre[i-1]+ar[i];
 map<ll,ll>mp;
 ll mx=0,ans=0;
 for(int i=n-1;i>=0;i--)
 {
     mp[pre[i]]++;
     mx=max(mx,mp[pre[i]]);
     if(ar[i]==0)
     {
  ans+=mx;
  mx=0;
  mp.clear();
     }
 }
 cout<<ans+mp[0] nl;
 
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}