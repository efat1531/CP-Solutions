// Problem: B. XY Sequence
// Contest: Codeforces - Educational Codeforces Round 125 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1657/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)
 
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, b, x, y;
        cin >> n >> b >> x >> y;
        ll sum = 0;
        ll cp  = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cp = cp + x;
            if (cp <= b)
            {
                v.push_back(cp);
                sum += cp;
            }
            else
            {
                cp -= x;
                cp -= y;
                v.push_back(cp);
                sum += cp;
            }
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