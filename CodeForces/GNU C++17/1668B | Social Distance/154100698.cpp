// Problem: B. Social Distance
// Contest: Codeforces - Codeforces Round #783 (Div. 2)
// URL: https://codeforces.com/contest/1668/problem/B
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
        int np, nc;
        cin >> np >> nc;
        int ar[np];
        for (int i = 0; i < np; i++)
            cin >> ar[i];
        sort(ar, ar + np);
        for (int i = np - 1; i >= 0; i--)
        {
            if (i != 0)
                nc -= (ar[i] + 1);
            if (i == np - 1)
                nc -= ar[i];
            if (i == 0)
                nc -= 1;
            if (nc < 0)
            {
                break;
            }
        }
        if (nc >= 0)
            cout << "YES" nl;
        else
            cout << "NO" nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}