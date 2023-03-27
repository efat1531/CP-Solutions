// Problem: B. Chocolate
// Contest: Codeforces - Codeforces Round #340 (Div. 2)
// URL: https://codeforces.com/problemset/problem/617/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef unsigned long long l1;
typedef double db;
#define pi 2 * acos(0.0)
#define sz(x) (x).size()
#define read(x)                                                               \
  int x;                                                                      \
  cin >> x
#define prDouble(x, y) fixed << setprecision(y) << x
#define lcm(a, b) (a * b) / __gcd(a, b);
#define sortof(x) sort((x).begin(), (x).end());
#define fast_io                                                               \
  ios_base::sync_with_stdio(false);                                           \
  cin.tie(NULL);                                                              \
  cout.tie(NULL)
#define mm(x, v) memset((x), v, sizeof(x));
#define testcase(t, x)                                                        \
  int t;                                                                      \
  cin >> t;                                                                   \
  for(int x = 1; x <= t; x++)
#define nl << "\n"
 
void solve()
{
  // My code My Rules
  read(n);
  vector<int> v;
  for(int i = 0; i < n; i++)
    {
      read(a);
      if(a == 1)
        v.push_back(i);
    }
  if(sz(v) == 0)
    cout << 0 nl;
  else
    {
      ll ans = 1;
      for(int i = 1; i < sz(v); i++)
        {
          ans *= (v[i] - v[i - 1]);
        }
      cout << ans nl;
    }
}
 
int32_t main()
{
  fast_io;
  solve();
  return 0;
}