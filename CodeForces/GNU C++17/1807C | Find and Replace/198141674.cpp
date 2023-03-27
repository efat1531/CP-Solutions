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
 map<char,int>mpe,mpo;
 int n;
 cin>>n;
 string s;
 cin>>s;
 for(int i=0;i<n;i++)
 {
     if(i&1)
  mpo[s[i]]++;
     else
  mpe[s[i]]++;
 }
 string ans="YES";
 for(int i=0;i<n;i++)
 {
     char c=s[i];
     if(mpe[c]>0 and mpo[c]>0)
     {
  ans="NO";
  break;
     }
 }
 cout<<ans nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}