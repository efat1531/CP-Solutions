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
    testcase(tt,t){
 string s;
 cin>>s;
 string ans="YES";
 for(int i=0;i<s.size();i++)
 {
     if(i==s.size()-1)
     {
  if(s[i]!='e' and s[i]!='Y' and s[i]!='s')
      ans="NO";
  continue;
     }
     else if(s[i]=='Y' and s[i+1]!='e')
  ans="NO";
     else if(s[i]=='e' and s[i+1]!='s')
  ans="NO";
     else if(s[i]=='s' and s[i+1]!='Y')
  ans = "NO";
  else if(s[i]!='Y' and s[i]!='e' and s[i]!='s')
        ans="NO";
     if(ans=="NO")
  break;
 
 }
 cout<<ans nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}