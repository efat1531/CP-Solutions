// Problem: B. Mark the Dust Sweeper
// Contest: Codeforces - Codeforces Round #807 (Div. 2)
// URL: https://codeforces.com/contest/1705/problem/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef unsigned long long l1;
typedef double db;
#define pi    2 * acos(0.0)
#define sz(x) (x).size()
#define read(x)                                                                                                        \
    ll x;                                                                                                              \
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
    ll t;                                                                                                              \
    cin >> t;                                                                                                          \
    for (ll x = 1; x <= t; x++)
#define nl << "\n"
 
void solve()
{
    // My code My Rule
    testcase(tt, t)
    {
        ll n;
        cin >> n;
        ll ar[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        ll fp = 0;
        for (ll i = 0; i < n; i++)
        {
            if (ar[i] > 0)
            {
                fp = i;
                break;
            }
            fp = i;
        }
        cerr << fp nl;
        if (fp == n - 1)
            cout << 0 nl;
        else
        {
            ll z0  = 0;
            ll ans = 0;
            for (ll i = fp; i < n; i++)
            {
                if (ar[i] == 0)
                    z0++;
                else if (i != n - 1)
                    ans += ar[i];
            }
            if (ar[n - 1] == 0)
            {
                ans += z0 - 1;
            }
            else
                ans += z0;
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