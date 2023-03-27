// Problem: D. Black and White Stripe
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/D
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ar[n + 1];
        ar[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'B')
                ar[i] = ar[i - 1] + 0;
            else
                ar[i] = ar[i - 1] + 1;
        }
        int ans = INT_MAX;
        for (int i = k, j = 0; i <= n; i++, j++)
        {
            ans = min(ar[i] - ar[j], ans);
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