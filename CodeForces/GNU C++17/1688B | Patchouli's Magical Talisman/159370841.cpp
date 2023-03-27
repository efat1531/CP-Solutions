// Problem: B. Patchouli's Magical Talisman
// Contest: Codeforces - Codeforces Round #796 (Div. 2)
// URL: https://codeforces.com/contest/1688/problem/B
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
 
int setbit(int n)
{
    return log2(n & -n) + 1;
}
 
void solve()
{
    // My code My Rules
    testcase(tt, t)
    {
        int n;
        cin >> n;
        int op = INT_MAX;
        int ar[n];
        int ans  = 0;
        bool odd = false;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if ((ar[i] & 1) == 0)
            {
                ans++;
                op = min(op, setbit(ar[i]));
            }
            else
                odd = true;
        }
        cerr << op << ": " << ans nl;
        if (odd == false)
            ans += (op - 2);
        cout << ans nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}