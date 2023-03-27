// Problem: C. Where's the Bishop?
// Contest: Codeforces - Codeforces Round #799 (Div. 4)
// URL: https://codeforces.com/contest/1692/problem/C
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
        vector<string> s;
        for (int i = 0; i < 8; i++)
        {
            string a;
            cin >> a;
            s.push_back(a);
        }
        int x, y;
        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if (s[i][j] == '#' and s[i - 1][j - 1] == '#' and s[i + 1][j + 1] == '#' and s[i - 1][j + 1] == '#' and
                    s[i + 1][j - 1] == '#')
                {
                    x = i + 1;
                    y = j + 1;
                    break;
                }
            }
        }
        cout << x << " " << y nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}