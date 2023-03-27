#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long l1;
typedef double db;
#define pi 2 * acos(0.0)
#define sz(x) (x).size()
#define read(x) \
  int x;        \
  cin >> x
#define prDouble(x, y) fixed << setprecision(y) << x
#define lcm(a, b) (a * b) / __gcd(a, b);
#define sortof(x) sort((x).begin(), (x).end());
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define mm(x, v) memset((x), v, sizeof(x));
#define testcase(t, x) \
  int t;               \
  cin >> t;            \
  for (int x = 1; x <= t; x++)
#define nl << "\n"
#define debug(x) cout<<#x<<" = "<<x nl;

const int MaxN=2e5+5;
int degree[MaxN];
vector<int>Graph[MaxN];

vector<int>Toposort(int n)
{
    vector<int>v(n+1);
    vector<int>a;
    queue<int>q;
    for(int i=1;i<=n;i++)
    {
	if(degree[i]==0)
	    q.push(i);
    }
    int cnt=1;
    while(!q.empty())
    {
	if(q.size()>1)
	    return a;
	int node=q.front();
	q.pop();
	v[node]=cnt++;
	for(auto i:Graph[node])
	{
	    degree[i]--;
	    if(degree[i]==0)
		q.push(i);
	}
    }
    return v;
}

void solve() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
	int u,v;
	cin>>u>>v;
	Graph[u].push_back(v);
	degree[v]++;
    }
    vector<int>order=Toposort(n);
    if(order.size()!=n+1)
	cout<<"No" nl;
    else
    {
	cout<<"Yes" nl;
	int a=0;
	for(auto x:order)
	{
	    a++;
	    if(a==1)
		continue;
	    cout<<x<<" ";
	}
	cout nl;
    }
}

int32_t main() {
  fast_io;
  solve();
  return 0;
}
