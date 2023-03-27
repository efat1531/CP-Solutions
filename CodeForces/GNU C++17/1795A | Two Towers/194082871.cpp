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
    int a,b;
    cin>>a>>b;
    string s1,s2;
    cin>>s1>>s2;
    reverse(s2.begin(),s2.end());
    s1+=s2;
    int cnt=0;
    for(int i=0;i<s1.size()-1;i++)
    {
 if(s1[i]==s1[i+1])
     cnt++;
    }
    if(cnt>1)
 cout<<"NO" nl;
    else
 cout<<"YES" nl;
  }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}