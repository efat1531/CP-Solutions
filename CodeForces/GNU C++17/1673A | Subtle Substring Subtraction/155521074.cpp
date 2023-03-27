// Problem: A. Subtle Substring Subtraction
// Contest: Codeforces - Codeforces Round #785 (Div. 2)
// URL: https://codeforces.com/contest/1673/problem/A
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
        string s;
        cin >> s;
        int a = 0, b = 0;
        for (int i = 0; i < s.size(); i++)
        {
            a += (s[i] - 'a') + 1;
        }
        // cerr << a nl;
        if (s.size() & 1)
        {
            b = min(s[0] - 'a', s[s.size() - 1] - 'a');
            b++;
            a -= b;
        }
        if (a > b)
            cout << "Alice " << a - b nl;
        else
            cout << "Bob " << b - a nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}