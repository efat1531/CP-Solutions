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
const ll inf=0x3f3f3f3f3f3f3f3f;
 
void solve() {
    testcase(tt,t)
    {
 int n;
 cin>>n;
 int ar[n],br[n];
 int cma=0,cmb=0;
 for(int i=0;i<n;i++)
     cin>>ar[i];
 for(int i=0;i<n;i++)
     cin>>br[i];
 for(int i=0;i<n;i++)
 {
     if(ar[i]>br[i])
     {
  swap(ar[i],br[i]);
     }
 }
 int arm=0,brm=0;
 for(int i=0;i<n;i++)
 {
     arm=max(arm,ar[i]);
     brm=max(brm,br[i]);
 }
 if(arm==ar[n-1] and brm==br[n-1])
     cout<<"Yes" nl;
 else
     cout<<"No" nl;
 
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}