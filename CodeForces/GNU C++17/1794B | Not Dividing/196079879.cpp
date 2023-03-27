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
 ll ar[n];
 for(ll i=0;i<n;i++)
     cin>>ar[i];
 for(ll i=0;i<n-1;i++)
 {
     ll a=ar[i];
     ll b=ar[i+1];
     //cout<<a<<" "<<b nl;
     if(b%a==0 and a==1 and b==1)
     {
  ar[i]=2;
  ar[i+1]=3;
  continue;
     }
     if(b%a==0 and a!=1)
     {
  ar[i+1]+=1;
  continue;
     }
     if(b%a==0 and a==1)
     {
  if(b&1)
      ar[i]=2;
  else if(b%3!=0)
      ar[i]=3;
  else
   ar[i+1]++,ar[i]=2;
  continue;
     }
     if(b%a!=0 and b==1 and i!=n-1)
     {
  if(a&1)
      ar[i+1]=2;
  else
      ar[i+1]=3;
  continue;
     }
 }
 for(auto x:ar)
     cout<<x<<" ";
 cout nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}