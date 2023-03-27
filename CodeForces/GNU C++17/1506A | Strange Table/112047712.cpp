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
 
void solve()
{
 read(t);
 while (t--)
 {
  ll n, m, x;
  cin >> n >> m >> x;
  ll px, py;
  py = (x - 1) / n;
  px = (x - 1) % n;
  // cout << "Old Number  " << x << endl;
  // cout << "Position row  " << px << "    Position collum   " << py << nl;
  px = px * m;
  px = py + px + 1;
  cout << px << nl;
 
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