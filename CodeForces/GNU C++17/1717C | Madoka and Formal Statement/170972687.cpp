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
  // My code My Rule
  testcase(tt, t) {
    int n;
    cin >> n;
    int ar[n];
    int br[n];
    for (int i = 0; i < n; i++)
      cin >> ar[i];
    for (int i = 0; i < n; i++)
      cin >> br[i];
    bool yes = true;
    for (int i = 0; i < n; i++) {
      if (ar[i] == br[i])
        continue;
      else if (br[i] > br[(i + 1) % n] + 1)
        yes = false;
      else if (ar[i] > br[i])
        yes = false;
      if (yes == false)
        break;
    }
    if (yes == false)
      cout << "NO" nl;
    else
      cout << "YES" nl;
  }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}