// Problem: E. Binary Deque
// Contest: Codeforces - Codeforces Round #799 (Div. 4)
// URL: https://codeforces.com/contest/1692/problem/E
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
 
int maxsum(vector<int> &v, int &k)
{
    int n = v.size();
    int i = 0, j = 0, sum = 0;
    int mx = INT_MIN;
    while (j < n)
    {
        sum += v[j];
        if (sum < k)
        {
            j++;
        }
        else if (sum == k)
        {
            mx = max(mx, j - i + 1);
            j++;
        }
        else if (sum > k)
        {
            while (sum > k)
            {
                sum = sum - v[i];
                i++;
            }
            j++;
        }
    }
    return mx;
}
 
void solve()
{
    // My code My Rules
    testcase(tt, t)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int ts = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ts += v[i];
        }
        if (ts < k)
            cout << -1 nl;
        else if (ts == k)
            cout << 0 nl;
        else
        {
            cout << n - maxsum(v, k) nl;
        }
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}