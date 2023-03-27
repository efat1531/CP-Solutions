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
    testcase(tt, t)
 {
  int n;
  cin>>n;
  int back=n*n;
  int start=1;
  int ar[n][n];
  bool prev=false;
  for(int i=0;i<n;i++)
  {
   if(i&1)
   {
    for(int j=n-1;j>=0;j--)
    {
     if(prev)
      ar[i][j]=back--;
     else
      ar[i][j]=start++;
     prev^=true;
    }
   }else
   {
    for(int j=0;j<n;j++)
    {
     if(prev)
      ar[i][j]=back--;
     else
      ar[i][j]=start++;
     prev^=true;
    }
   }
  }
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
    cout<<ar[i][j]<<" ";
   cout nl;
  }
 }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}