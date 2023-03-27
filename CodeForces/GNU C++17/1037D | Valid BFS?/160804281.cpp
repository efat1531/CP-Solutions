// Problem: D. Valid BFS?
// Contest: Codeforces - Manthan, Codefest 18 (rated, Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1037/D
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
 
const int MaxN = 2e5 + 7;
vector<int> Graph[MaxN];
bool visited[MaxN];
int given[MaxN];
 
string BFS(int source, int n)
{
    string s = "YES";
    queue<int> q;
    q.push(source);
    int k = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        map<int, bool> mp;
        visited[u] = true;
        for (int i = 0; i < Graph[u].size(); i++)
        {
            int v = Graph[u][i];
            if (visited[v] == false)
            {
                mp[v] = true;
            }
        }
        for (int i = k; i < k + mp.size(); i++)
        {
            if (mp[given[i]] == false)
            {
                s = "NO";
                return s;
            }
            else
                q.push(given[i]);
        }
        k += mp.size();
    }
    return s;
}
 
void solve()
{
    // My code My Rules
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        Graph[x].push_back(y);
        Graph[y].push_back(x);
    }
    for (int i = 0; i < n; i++)
        cin >> given[i];
    string s = BFS(1, n);
    cout << s nl;
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}