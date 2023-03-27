// Problem: G. Fall Down
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/G
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
        int n, m;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
 
        for (int c = 0; c < m; c++)
        {
            int s   = 0;
            int idx = 0;
            for (int r = 0; r < n; r++)
            {
                if (v[r][c] == 'o')
                {
                    for (int k = idx; k < r; k++)
                    {
                        if (k >= r - s)
                            v[k][c] = '*';
                        else
                            v[k][c] = '.';
                    }
                    s   = 0;
                    idx = r + 1;
                }
                else if (v[r][c] == '*')
                    s++;
            }
            cerr << s;
            for (int k = idx; k < n; k++)
            {
                if (k > n - 1 - s and v[k][c] != 'o')
                    v[k][c] = '*';
                else if (v[k][c] != 'o')
                    v[k][c] = '.';
            }
        }
        cerr nl;
        for (auto x : v)
            cout << x nl;
        cout nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}