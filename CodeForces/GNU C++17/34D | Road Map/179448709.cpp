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
 
const int MaxN=5e5+27;
 
vector<int>Graph[MaxN];
int parent[MaxN];
 
void BFS(int source)
{
    parent[source]=0;
    queue<int>q;
    q.push(source);
    while(!q.empty())
    {
 int p=q.front();
 q.pop();
 for(int i=0;i<Graph[p].size();i++)
 {
     int c=Graph[p][i];
     if(parent[c]==-1)
  parent[c]=p,q.push(c);
     //cout<<"Node -> "<<c<<" Parent -> "<<p<<endl;
 }
    }
}
 
void solve() {
    int n,r1,r2;
    cin>>n>>r1>>r2;
    for(int i=1;i<=n;i++)
    {
 if(i==r1)
     continue;
 int a;
 cin>>a;
 Graph[i].push_back(a);
 Graph[a].push_back(i);
    }
    mm(parent,-1);
    BFS(r2);
    for(int i=1;i<=n;i++)
    {
 if(i==r2)
     continue;
 else
     cout<<parent[i]<<" ";
    }
    cout nl;
    
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}