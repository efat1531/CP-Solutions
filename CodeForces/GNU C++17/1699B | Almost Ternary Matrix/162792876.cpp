// Problem: B. Almost Ternary Matrix
// Contest: Codeforces - Codeforces Round #804 (Div. 2)
// URL: https://codeforces.com/contest/1699/problem/B
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
        int n, m;
        cin >> n >> m;
        int r = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            c = 0;
            for (int j = 0; j < m; j++)
            {
                if (r == 0 or r == 3)
                {
                    if (c == 0 or c == 3)
                        c++, cout << 1 << " ";
                    else
                        c++, cout << 0 << " ";
                    if (c > 3)
                        c = 0;
                }
                else
                {
                    if (c == 0 or c == 3)
                        c++, cout << 0 << " ";
                    else
                        c++, cout << 1 << " ";
                    if (c > 3)
                        c = 0;
                }
            }
            r++;
            if (r > 3)
                r = 0;
            cout nl;
        }
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}