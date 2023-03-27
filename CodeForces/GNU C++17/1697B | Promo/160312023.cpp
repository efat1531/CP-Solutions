// Problem: B. Promo
// Contest: Codeforces - Educational Codeforces Round 130 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1697/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef unsigned long long l1;
typedef double db;
#define pi    2 * acos(0.0)
#define sz(x) (x).size()
#define read(x)                                                                                                        \
    int x;                                                                                                             \
    cin >> x
#define prDouble(x, y) fixed << setprecision(y) << x
#define lcm(a, b)      (a * b) / __gcd(a, b);
#define sortof(x)      sort((x).begin(), (x).end());
#define fast_io                                                                                                        \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL);                                                                                                     \
    cout.tie(NULL)
#define mm(x, v) memset((x), v, sizeof(x));
#define testcase(t, x)                                                                                                 \
    int t;                                                                                                             \
    cin >> t;                                                                                                          \
    for (int x = 1; x <= t; x++)
#define nl << "\n"
 
void solve()
{
    // My code My Rules
    ll n, q;
    cin >> n >> q;
    ll ar[n + 1];
    ar[0] = 0;
    for (ll i = 1; i <= n; i++)
        cin >> ar[i];
    sort(ar, ar + n + 1);
    ll br[n + 1];
    br[0] = ar[0];
    for (ll i = 1; i <= n; i++)
        br[i] = br[i - 1] + ar[i];
    cerr nl;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        ll tp   = br[n] - br[n - x];
        ll bp   = x - y;
        ll paid = br[n] - br[n - bp];
        cout << tp - paid nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}