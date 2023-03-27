// Problem: F. Eating Candies
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/F
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
        ll s1 = 0, s2 = 0;
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        s1 += ar[0];
        int c   = 1;
        int ans = 0;
        for (int i = 1, j = n - 1; i <= j;)
        {
            if (s1 > s2)
            {
                s2 += ar[j];
                j--;
                c++;
            }
            else if (s2 > s1)
            {
                s1 += ar[i];
                i++;
                c++;
            }
            else
            {
                s1 += ar[i];
                i++;
                c++;
            }
 
            if (s1 == s2)
            {
                // cerr << "TEST " << s1 << " " << s2 nl;
                ans = c;
            }
        }
        cout << ans nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}