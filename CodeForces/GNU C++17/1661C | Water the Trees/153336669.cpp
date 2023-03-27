// Problem: C. Water the Trees
// Contest: Codeforces - Educational Codeforces Round 126 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1661/problem/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
 
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
 
ll findmin(ll ar[], ll target, ll n)
{
    ll ec = 0, oc = 0;
    for (int i = 0; i < n; i++)
    {
        ll a = target - ar[i];
        oc += a % 2;
        ec += a / 2;
    }
    // cerr << "Even -> " << ec << " Odd ->" << oc nl;
    if (oc > ec)
        return (oc * 2) - 1;
    ll x;
    ll low = 0, high = ec;
    while (low <= high)
    {
        ll mid = (high + low) / 2;
        if (ec - mid >= oc + (2 * mid))
        {
            x   = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    ec -= x;
    oc += (2 * x);
    // cerr << "ODD->" << oc << " Even " << ec nl;
    ll ans  = 2 * ec;
    ll ans1 = LLONG_MAX;
    // cerr << "ANS 1 " << ans1 nl;
    if (ec - oc == 2)
    {
        ans1 = ans - 1;
    }
    return min(ans, ans1);
}
 
void solve()
{
    // My code My Rules
    testcase(tt, t)
    {
        ll n;
        cin >> n;
        ll ar[n];
        ll me = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            me = max(ar[i], me);
        }
        ll ans  = findmin(ar, me, n);
        ll ans1 = findmin(ar, me + 1, n);
        cout << min(ans, ans1) nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}