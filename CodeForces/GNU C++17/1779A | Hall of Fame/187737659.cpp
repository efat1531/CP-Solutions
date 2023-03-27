// Author - Sp3cTer
// Date   - 03 - 01 - 2023
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
 int n;
 cin>>n;
 string s;
 cin>>s;
 bool ans=false;
 for(int i=0;i+1<n;i++)
 {
     if(s[i]=='R' and s[i+1]=='L')
     {
  cout<<0 nl;
  ans=true;
  break;
     }else if(s[i]=='L' and s[i+1]=='R')
     {
  cout<<i+1 nl;
  ans=true;
  break;
     }
 }
 if(ans==false)
     cout<<-1 nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}