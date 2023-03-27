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
    testcase(tt,t)
    {
 read(n);
 read(k);
 if(k==0)
 {
     for(int i=0;i<n;i++)
  cout<<-1<<" ";
     cout nl;
     continue;
 }
 int to=0,ex=0;
 for(int i=1;i<=30;i++)
 {
     if((i*(i+1)/2)<=k)
  to=i,ex=k-(i*(i+1))/2;
     else
  break;
 }
 for(int i=0;i<to;i++)
     cout<<2<<" ";
 for(int i=to;i<n;i++)
 {
     if(ex>0)
     {
  int val=(to-ex)*2+1;
  val*=-1;
  cout<<val<<" ";
  ex=0;
  continue;
     }
     cout<<-1000<<" ";
 }
 cout nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}