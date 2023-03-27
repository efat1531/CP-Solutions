// Problem: A. Direction Change
// Contest: Codeforces - Codeforces Round #783 (Div. 2)
// URL: https://codeforces.com/contest/1668/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
 
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
        ll n, m;
        cin >> n >> m;
        if (n == 1 or m == 1)
        {
            if (abs(n - m) > 1)
                cout << "-1" nl;
            else
                cout << abs(n - m) nl;
        }
        else
        {
            ll ans = min(n, m) - 1;
            ans *= 2;
            cerr << ans nl;
            ll me = max(n, m);
            me -= min(m, n);
            ans += me;
            cerr << me nl;
            ans += ((me) / 2) * 2;
            cout << ans nl;
        }
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}