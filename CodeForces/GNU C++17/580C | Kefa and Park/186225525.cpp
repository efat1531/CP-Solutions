// Author - Sp3cTer
// Date   - 21 - 12 - 2022
// Time   - 18 - 47
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef unsigned long long l1;
typedef double db;
#define pi 2 * acos(0.0)
#define sz(x) (x).size()
#define read(x)                                                                \
  int x;                                                                       \
  cin >> x
#define prDouble(x, y) fixed << setprecision(y) << x
#define lcm(a, b) (a * b) / __gcd(a, b);
#define sortof(x) sort((x).begin(), (x).end());
#define fast_io                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)
#define mm(x, v) memset((x), v, sizeof(x));
#define testcase(t, x)                                                         \
  int t;                                                                       \
  cin >> t;                                                                    \
  for (int x = 1; x <= t; x++)
#define nl << "\n"
 
const int MaxN=1e5+5;
int cats[MaxN];
vector<int>Graph[MaxN];
bool visited[MaxN];
int cnt=0;
int lf=0;
int n,m;
 
void DFS(int cn,int cc)
{
    if(visited[cn] or cc>m)
    {
 return;
    }
    visited[cn]=true;
    if(cats[cn]==1)
 cc++;
    else
 cc=0;
    if(Graph[cn].size()==1 and cn!=1 and cc<=m)
    {
 lf++;
    }
    
    for(auto x:Graph[cn])
    {
 DFS(x,cc);
    }
}
 
void solve() {
    cin>>n>>m;
    for(int i=1;i<=n;i++)
 cin>>cats[i];
    for(int i=0;i<n-1;i++)
    {
 int u,v;
 cin>>u>>v;
 Graph[u].push_back(v);
 Graph[v].push_back(u);
    }
    DFS(1,0);
    cout<<lf nl;
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}