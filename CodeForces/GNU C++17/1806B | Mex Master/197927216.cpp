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
 int cnt0=0;
 int cntp=0;
 int ar[n];
 map<int,int>mp;
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
     if(ar[i]==0)
  cnt0++;
     else
  cntp++;
     mp[ar[i]]++;
 }
 if(cnt0<=cntp+1)
     cout<<0 nl;
 else
 {
     if(mp.size()==2)
     {
  if(mp[1]!=0)
  {
      cout<<2 nl;
  }else
  {
      cout<<1 nl;
  }
     }else
     {
  cout<<1 nl;
     }
 }
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}