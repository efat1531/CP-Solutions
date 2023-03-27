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
 ll n,q;
 cin>>n>>q;
 ll ar[n];
 ll pre[n+1];
 ll sum=0;
 pre[0]=0;
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
     sum+=ar[i];
     pre[i+1]=sum;
 }
 while(q--)
 {
     ll l,r,m;
     cin>>l>>r>>m;
     m=(r-l+1)*m;
     ll cnt=pre[r]-pre[l-1];
     //cout<<m<<" "<<cnt <<" "<<sum nl;
     if((sum-cnt+m)&1)
  cout<<"YES" nl;
     else
  cout<<"NO" nl;
 }
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}