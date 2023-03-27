// Problem: B. Mystic Permutation
// Contest: Codeforces - Codeforces Round #798 (Div. 2)
// URL: https://codeforces.com/contest/1689/problem/B
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
 
bool check(int ar[], int br[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == br[i])
            return false;
    }
    return true;
}
 
void solve()
{
    // My code My Rules
    testcase(tt, t)
    {
        int n;
        cin >> n;
        int ar[n], br[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i], br[i] = ar[i];
        sort(br, br + n);
        if (n == 1)
            cout << "-1" nl;
        else
        {
            if (check(ar, br, n))
            {
                for (auto x : br)
                    cout << x << " ";
                cout nl;
            }
            else
            {
                for (int i = 0; i < n - 1; i++)
                {
                    if (ar[i] == br[i])
                        swap(br[i], br[i + 1]);
                }
                if (ar[n - 1] == br[n - 1])
                    swap(br[n - 1], br[n - 2]);
                for (auto x : br)
                    cout << x << " ";
                cout nl;
            }
        }
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}