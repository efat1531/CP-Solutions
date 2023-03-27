// Author - Sp3cTer
// Date   - 15 - 12 - 2022
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
 int odd=0;
 int ar[n];
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
     odd+=(ar[i]&1);
 }
 if((odd&1)==0)
 {
     cout<<0 nl;
     continue;
 }
 int ans=INT_MAX;
 for(auto x:ar)
 {
     int cnt=0;
     if((x&1)==0)
     {
  while((x&1)==0)
  {
      cnt++;
      x/=2;
  }
  ans=min(ans,cnt);
     }else
     {
  while(x&1)
  {
      cnt++;
      x/=2;
  }
  ans=min(ans,cnt);
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