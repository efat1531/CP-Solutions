// Problem: A. Game with Cards
// Contest: Codeforces - Educational Codeforces Round 129 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1681/problem/A
// Memory Limit: 256 MB
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
        int a;
        cin >> a;
        int ar[a];
        for (int i = 0; i < a; i++)
            cin >> ar[i];
        int b;
        cin >> b;
        int br[b];
        for (int i = 0; i < b; i++)
            cin >> br[i];
        sort(ar, ar + a);
        sort(br, br + b);
        if (ar[a - 1] == br[b - 1])
            cout << "Alice" nl << "Bob" nl;
        else if (ar[a - 1] > br[b - 1])
            cout << "Alice" nl << "Alice" nl;
        else
            cout << "Bob" nl << "Bob" nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}