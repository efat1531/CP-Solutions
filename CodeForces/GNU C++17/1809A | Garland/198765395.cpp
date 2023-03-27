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
 map<char,int>mp;
 for(int i=0;i<4;i++)
 {
     char a;
     cin>>a;
     mp[a]++;
 }
 if(mp.size()==1)
     cout<<-1 nl;
 else if(mp.size()!=2)
     cout<<4 nl;
 else 
 {
     int ans=4;
     for(auto x:mp)
  if(x.second==3)
      ans+=2;
     cout<<ans nl;
 }
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}