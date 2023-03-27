// Problem: B. Array Cloning Technique
// Contest: Codeforces - Codeforces Round #781 (Div. 2)
// URL: https://codeforces.com/contest/1665/problem/B
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
 
ll count(ll n, ll ele)
{
    ll ans = 0;
    while (n > 0)
    {
        n -= ele;
        ele = 2 * ele;
        ans++;
    }
    return ans;
}
 
void solve()
{
    // My code My Rules
    testcase(tt, t)
    {
        ll n;
        cin >> n;
        ll ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        sort(ar, ar + n);
        if (ar[0] == ar[n - 1])
            cout << 0 nl;
        else
        {
            map<int, int> mp;
            for (auto x : ar)
            {
                mp[x]++;
            }
            ll me = 0;
            for (auto x : mp)
            {
                if (x.second > me)
                    me = x.second;
            }
            ll ans = n - (me);
            cerr << ans nl;
            ans += count(ans, me);
            cout << ans nl;
        }
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}