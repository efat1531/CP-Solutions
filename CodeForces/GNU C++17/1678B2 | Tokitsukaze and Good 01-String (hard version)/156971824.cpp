// Problem: B2. Tokitsukaze and Good 01-String (hard version)
// Contest: Codeforces - Codeforces Round #789 (Div. 2)
// URL: https://codeforces.com/contest/1678/problem/B2
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int tp  = 0;
        int ts  = 0;
        char pn = '2';
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != s[i + 1])
                tp++;
            else if (s[i] != pn)
            {
                pn = s[i];
                ts++;
                // cerr << ts nl;
            }
        }
        if (ts == 0)
            cout << tp << " " << ts + 1 nl;
        else
            cout << tp << " " << ts nl;
        // cerr nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}