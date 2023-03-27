// Author - Sp3cTer
// Date   - 16 - 12 - 2022
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
 int cordx[3];
 int cordy[3];
 for(int i=0;i<3;i++)
 {
     int a,b;
     cin>>a>>b;
     cordx[i]=a;
     cordy[i]=b;
 }
 sort(cordx,cordx+3);
 sort(cordy,cordy+3);
 string ans="NO";
 if(cordx[1]!=cordx[2] and cordx[1]!=cordx[0])
     ans="YES";
 if(cordy[1]!=cordy[2] and cordy[1]!=cordy[0])
     ans="YES";
 cout<<ans nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}