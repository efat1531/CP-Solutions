// Problem: B. Interesting Sum
// Contest: Codeforces - Codeforces Round #815 (Div. 2)
// URL: https://codeforces.com/contest/1720/problem/B
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
    // My code My Rule
    testcase(tt, t)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int me = 0, mie = INT_MAX;
        sort(ar, ar + n);
        for (int i = 1; i < n - 1; i++)
        {
            me  = max(me, ar[i]);
            mie = min(mie, ar[i]);
        }
        cout << (me - mie) + (ar[n - 1] - ar[0]) nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}