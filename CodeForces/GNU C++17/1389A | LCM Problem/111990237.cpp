#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
//Write all function in solve
// Main Untouch
 
void solve()
{
 int t;
 cin >> t;
 while (t--)
 {
  int l, r;
  cin >> l >> r;
  if ((l * 2) > r)cout << -1 << " " << -1 << endl;
  else
  {
   cout << l << " " << 2 * l << endl;
  }
 }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
void init_code() {
 fast_io;
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
int main() {
 init_code();
 solve();
 return 0;
}