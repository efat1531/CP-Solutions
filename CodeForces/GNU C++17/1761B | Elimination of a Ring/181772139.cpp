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
 map<int,int>mp;
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
 {
     int a;
     cin>>a;
     mp[a]++;
 }
 if(n<=3)
 {
     cout<<n<<endl;
 }else if(mp.size()>=3)
 {
     cout<<n<<endl;
 }else 
 {
     int ans=3;
     ans+=(n-3)/2;
     cout<<ans nl;
 }
    }
    
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}