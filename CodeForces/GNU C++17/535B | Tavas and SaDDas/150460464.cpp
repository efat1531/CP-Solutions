// Problem: B. Tavas and SaDDas
// Contest: Codeforces - Codeforces Round #299 (Div. 2)
// URL: https://codeforces.com/problemset/problem/535/B
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
vector<long long> v;
 
void find_all(long long n)
{
  v.push_back(n);
  if(n > 1000000000)
    return;
  find_all((n * 10) + 4);
  find_all((n * 10) + 7);
}
 
void solve()
{
  // My code My Rules
  int n;
  cin >> n;
  find_all(0);
  sort(v.begin(), v.end());
  int pos = lower_bound(v.begin(), v.end(), n) - v.begin();
  cout << pos nl;
}
 
int32_t main()
{
  fast_io;
  solve();
  return 0;
}