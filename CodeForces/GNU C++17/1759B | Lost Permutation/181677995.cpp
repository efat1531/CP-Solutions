// Author - Sp3cTer
// Date   - 18 - 11 - 2022
// Time   - 20 - 35
 
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
 int m,s,me=0;
 cin>>m>>s;
 int bsum=0;
 for(int i=0;i<m;i++)
 {
     int a;
     cin>>a;
     bsum+=a;
     me=max(me,a);
 }
 int c=s+bsum;
 int asum=0;
 for(int i=me;;i++)
 {
     asum=(i*(i+1))/2;
     if(asum>c)
     {
  cout<<"NO"<<endl;
  break;
     }else if(asum==c)
     {
  cout<<"YES" nl;
  break;
     }
 }
 
 
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}