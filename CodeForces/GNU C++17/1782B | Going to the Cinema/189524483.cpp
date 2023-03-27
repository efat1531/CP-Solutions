#include <algorithm>
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
 
void solve() {
  testcase(tt, t) {
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++)
      cin>>ar[i];
    sort(ar+1,ar+n+1);
    int ans=0;
    for(int i=1;i<=n;i++)
    {
      if(i>ar[i])
      {
        if(i==n or ar[i+1]>i)
          ans++;
      }
    }
    if(ar[1]!=0)
      ans++;
    cout<<ans nl;
  }
}
 
int32_t main() {
  // fast_io;
  solve();
  return 0;
}