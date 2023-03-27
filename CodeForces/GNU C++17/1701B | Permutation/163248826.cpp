// Problem: B. Permutation
// Contest: Codeforces - Educational Codeforces Round 131 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1701/problem/B
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
    // My code My Rule
    testcase(tt, t)
    {
        int n;
        cin >> n;
        bool ar[n + 1] = {false};
        cout << 2 nl;
        ar[0] = true;
        int c = 0;
        for (int i = 1; i <= (n + 1) / 2; i++)
        {
            if (ar[i] == false)
                cout << i << " ";
            if (ar[i] == false)
            {
                for (int j = i * 2; j <= n; j *= 2)
                {
                    cout << j << " ";
                    ar[j] = true;
                }
                ar[i] = true;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (ar[i] == false)
                cout << i << " ";
        }
        cout nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}