// Problem: A. Print a Pedestal (Codeforces logo?)
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/A
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
        if (n % 3 == 0)
            cout << n / 3 << " " << (n / 3) + 1 << " " << (n / 3) - 1 nl;
        else if (n % 3 == 1)
            cout << n / 3 << " " << (n / 3) + 2 << " " << (n / 3) - 1 nl;
        else
            cout << (n / 3) + 1 << " " << (n / 3) + 2 << " " << (n / 3) - 1 nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}