// Problem: B. Dictionary
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/B
// Memory Limit: 512 MB
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
        string s;
        cin >> s;
        int a   = s[0] - 'a';
        int pos = a * 25;
        // cerr << pos nl;
        if (s[1] > s[0])
        {
            pos += s[1] - 'a';
        }
        else
        {
            pos += s[1] - 'a';
            pos++;
        }
        // cerr << pos nl;
        cout << pos nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}