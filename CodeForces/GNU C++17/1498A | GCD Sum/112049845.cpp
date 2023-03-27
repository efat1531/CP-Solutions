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
#define loj(case_no,result) cout<<"Case "<<case_no<<": "<<result<<endl;
#define loj2(case_no,result) cout<<"Case "<<case_no<<":"<<endl<<result<<endl;
#define time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define vin vector<int>
#define vch vector<char>
#define p printf
#define sq(a) pow(a,2)
#define qb(a) pow(a,3)
#define erase(a,b) a.erase(a.begin()+(b-1))
#define nl endl;
using namespace std;
//Write all function in solve
// Main Untouch
ll sumofn(ll test)
{
 int a;
 ll sum = 0;
 while (test > 0)
 {
  a = test % 10;
  test = test / 10;
  sum += a;
 }
 return sum;
}
int gcdofn(ll a, ll b)
{
 int c = __gcd(a, b);
 return c;
}
 
void solve()
{
 read(t);
 while (t--)
 {
  ll n;
  cin >> n;
  ll a, sum = 0;
  ll test = n;
  sum = sumofn(n);
 
  int gcd = gcdofn(n, sum);
  //cout << "GCD  And Sum and N " << gcd << " " << sum << " " << n << nl;
  while (gcd == 1)
  {
   n += 1;
   sum = sumofn(n);
   gcd = gcdofn(n, sum);
   //cout << "GCD  And Sum and N " << gcd << " " << sum << " " << n << nl;
  }
  cout << n << nl;
 
 }
 time;
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