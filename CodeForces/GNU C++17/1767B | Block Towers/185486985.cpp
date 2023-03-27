// Author - Sp3cTer
// Date   - 16 - 12 - 2022
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
        ll n;
 cin>>n;
 ll t1;
 cin>>t1;
 ll ar[n-1];
 for(int i=0;i<n-1;i++)
 cin>>ar[i];
 sort(ar,ar+(n-1));
 for(int i=0;i<n-1;i++)
 {
     if(ar[i]>t1)
     {
  ll a=ar[i];
  ll b=t1;
  ll dif=a-b;
  ll ans=(dif+1)/2;
  t1+=ans;
     }
 }
    cout<<t1<<endl;
   }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}