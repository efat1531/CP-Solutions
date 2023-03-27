// Problem: C. Make Equal With Mod
// Contest: Codeforces - CodeTON Round 1 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1656/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)
 
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
    testcase(t, tt)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            read(a);
            ar[i] = a;
            mp[a]++;
        }
        if (mp[1] > 0)
        {
            bool f = false;
            sort(ar, ar + n);
            for (int i = 0; i < n - 1; i++)
            {
                if (ar[i] + 1 == ar[i + 1])
                {
                    f = true;
                    break;
                }
            }
            if (f == true)
                cout << "NO" nl;
            else
                cout << "YES" nl;
        }
        else
            cout << "YES" nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}