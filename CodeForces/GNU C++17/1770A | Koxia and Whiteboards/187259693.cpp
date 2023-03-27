// Author - Sp3cTer
// Date   - 30 - 12 - 2022
// Time   - 20 - 35
 
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
 ll n,m;
 cin>>n>>m;
 priority_queue<ll>pq;
 for(int i=0;i<n;i++)
 {
     ll a;
     cin>>a;
     pq.push(-a);
 }
 for(int i=0;i<m;i++)
 {
     ll a;
     cin>>a;
     pq.pop();
     pq.push(-a);
 }
 ll sum=0;
 while(!pq.empty())
 {
     sum+=-pq.top();
     pq.pop();
 }
 cout<<sum nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}