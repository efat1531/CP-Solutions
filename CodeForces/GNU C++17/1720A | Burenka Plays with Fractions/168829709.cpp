// Problem: A. Burenka Plays with Fractions
// Contest: Codeforces - Codeforces Round #815 (Div. 2)
// URL: https://codeforces.com/contest/1720/problem/A
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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        double a_b = (double)(a) / (double)(b);
        double c_d = (double)(c) / (double)(d);
        if (a_b == c_d)
            cout << 0 nl;
        else if (a == 0 or c == 0)
            cout << 1 nl;
        else
        {
            ll ac = a * d;
            ll bd = b * c;
            while (__gcd(ac, bd) != 1)
            {
                ll gcd = __gcd(ac, bd);
                ac /= gcd;
                bd /= gcd;
            }
            // cerr << "Test -> " << t << " = " << ac << " " << bd nl;
            if (ac == 1 or bd == 1)
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