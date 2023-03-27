// Author - Sp3cTer
// Date   - 18 - 12 - 2022
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
 int k,n;
 cin>>k>>n;
 vector<int>v;
 int j=1;
 map<int,int>mp;
 for(int i=1;i<=n;i+=j,j++)
 {
     if(v.size()==k)
  break;
     v.push_back(i);
     mp[i]++;
 }
 for(int i=n;i>0;i--)
 {
     if(v.size()==k)
  break;
     if(mp[i]==0)
  v.push_back(i);
 }
 sort(v.begin(),v.end());
 for(auto x:v)
     cout<<x<< " ";
 cout nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}