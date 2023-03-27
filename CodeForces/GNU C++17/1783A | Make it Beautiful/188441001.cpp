// Author - Sp3cTer
// Date   - 08 - 01 - 2023
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
 int ar[n];
 map<int,int,greater<int>>mp;
 for(int i=0;i<n;i++)
     cin>>ar[i],mp[ar[i]]++;
 if(mp.size()==1)
 {
     cout<<"NO" nl;
     continue;
 }
 cout<<"YES" nl;
 for(auto x:mp)
 {
     cout<<x.first<<" ";
     mp[x.first]--;
 }
 for(auto x:mp)
 {
     for(int i=0;i<x.second;i++)
  cout<<x.first<<" ";
 }
 cout nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}