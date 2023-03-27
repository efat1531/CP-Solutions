// Problem: A. Integer Moves
// Contest: Codeforces - Educational Codeforces Round 125 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1657/problem/0
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  int tc;
  cin >> tc;
  while(tc--)
    {
      int x, y;
      cin >> x >> y;
      if(x == 0 and y == 0)
        cout << 0 nl;
      else
        {
          int a = sqrt(x * x + y * y);
          int b = x * x + y * y;
          if(int(a * a) == b)
            cout << 1 nl;
          else
            cout << 2 nl;
        }
    }
}
 
int32_t main()
{
  fast_io;
  solve();
  return 0;
}