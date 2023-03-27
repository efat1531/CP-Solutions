// Problem: C. Odd/Even Increments
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/C
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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        string s = "YES";
        for (int i = 0; i < n; i += 2)
        {
            if (ar[i] % 2 == 0 and ar[0] % 2 != 0)
                s = "NO";
            else if (ar[i] % 2 == 1 and ar[0] % 2 != 1)
                s = "NO";
        }
        for (int i = 1; i < n; i += 2)
        {
            if (ar[i] % 2 == 0 and ar[1] % 2 != 0)
                s = "NO";
            else if (ar[i] % 2 == 1 and ar[1] % 2 != 1)
                s = "NO";
        }
        cout << s nl;
        cerr nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}