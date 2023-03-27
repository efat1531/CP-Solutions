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
 
void solve() {
    int n,m;
    cin>>n>>m;
    int ar[n+1];
    int br[m+1];
    vector<int>v;
    for(int i=1;i<=n;i++)
	cin>>ar[i],v.push_back(ar[i]);
    for(int i=1;i<=m;i++)
	cin>>br[i],v.push_back(br[i]);
    sort(v.begin(),v.end());
    map<int,int>mp;
    for(int i=0;i<v.size();i++)
    {
	mp[v[i]]=i+1;
    }
    for(int i=1;i<=n;i++)
	cout<<mp[ar[i]]<<" ";
    cout nl;
    for(int i=1;i<=m;i++)
	cout<<mp[br[i]]<<" ";
    cout nl;
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}
