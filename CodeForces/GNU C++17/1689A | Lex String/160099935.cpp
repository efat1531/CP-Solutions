// Problem: A. Lex String
// Contest: Codeforces - Codeforces Round #798 (Div. 2)
// URL: https://codeforces.com/contest/1689/problem/A
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
        int n, m, k;
        cin >> n >> m >> k;
        string s1, s2;
        cin >> s1 >> s2;
 
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        string s = "";
        int pt1 = 0, pt2 = 0;
        int cos1 = 0, cos2 = 0;
        while (pt1 != s1.size() and pt2 != s2.size())
        {
            if (s1[pt1] < s2[pt2] and cos1 != k)
                s += s1[pt1], pt1++, cos1++, cos2 = 0;
            else if (s1[pt1] > s2[pt2] and cos2 != k)
                s += s2[pt2], pt2++, cos2++, cos1 = 0;
            if (cos1 == k and pt1 != s1.size())
                s += s2[pt2], pt2++, cos1 = 0, cos2++;
            else if (cos2 == k and pt2 != s2.size())
                s += s1[pt1], pt1++, cos1++, cos2 = 0;
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