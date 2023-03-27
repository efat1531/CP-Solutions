// Problem: A. Array Balancing
// Contest: Codeforces - Educational Codeforces Round 126 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1661/problem/A
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
    testcase(tt, t)
    {
        ll n;
        cin >> n;
        ll ar[n], br[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        for (int i = 0; i < n; i++)
            cin >> br[i];
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > br[i])
                swap(ar[i], br[i]);
        }
        ll sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += abs(ar[i] - ar[i + 1]);
            sum += abs(br[i] - br[i + 1]);
        }
        cout << sum nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}