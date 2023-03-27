// Problem: B. Array Decrements
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/B
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
        int ar[n], br[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        for (int i = 0; i < n; i++)
            cin >> br[i];
        int d = 0;
        map<int, int> dif;
        map<int, int> zero;
        string s = "YES";
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 0 and br[i] == 0)
                continue;
            else if (ar[i] > 0 and br[i] == 0)
                zero[ar[i] - br[i]]++;
            else if (ar[i] < br[i])
            {
                s = "NO";
                break;
            }
            else
                d = ar[i] - br[i], dif[d]++;
        }
        if (dif.size() > 1)
            s = "NO";
        else if (dif.size() > 0)
        {
            for (auto x : zero)
            {
                if (x.first > d)
                    s = "NO";
            }
        }
        cout << s nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}