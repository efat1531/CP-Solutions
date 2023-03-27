// Problem: B. Circle Game
// Contest: Codeforces - Codeforces Round #801 (Div. 2) and EPIC Institute of Technology Round
// URL: https://codeforces.com/contest/1695/problem/B
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
        int mn = INT_MAX, idx;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] < mn)
            {
                mn  = ar[i];
                idx = i + 1;
            }
        }
        // cerr << mn << " " << idx nl;
        if (n % 2 == 0)
        {
            if (idx & 1)
                cout << "Joe" nl;
            else
                cout << "Mike" nl;
        }
        else
            cout << "Mike" nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}