// Problem: E. 2-Letter Strings
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/E
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
        int n;
        cin >> n;
        map<char, int> oc1;
        map<char, int> oc2;
        map<string, int> ocs;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            oc1[s[0]]++;
            oc2[s[1]]++;
            ocs[s]++;
            v.push_back(s);
        }
        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            string s = v[i];
            int res1 = max(0, oc1[s[0]] - ocs[s]);
            int res2 = max(0, oc2[s[1]] - ocs[s]);
            ans += res1 + res2;
            cerr << ans nl;
            if (oc1[s[0]] > 0)
                oc1[s[0]]--;
            if (oc2[s[1]] > 0)
                oc2[s[1]]--;
            if (ocs[s] > 0)
                ocs[s]--;
        }
        cout << ans nl;
        cerr nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}