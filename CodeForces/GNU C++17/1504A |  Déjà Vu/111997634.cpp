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
bool check(string s)
{
 bool f1 = true;
 for (int i = 0, j = s.size() - 1; i < j; i++, j--)
 {
  if (s[i] != s[j])
  {
   return false;
  }
 }
 return true;
 
}
 
void solve()
{
 int t;
 cin >> t;
 while (t--)
 {
  string s;
  cin >> s;
  bool f = false;
  int a = s.size();
  vch v;
  fr(0, a)
  {
 
   if (s[i] != 'a')
   { f = true;
    break;
   }
  }
  if (f == false)
  {
   cout << "No" << nl;
  } else
  {
   cout << "Yes" << nl;
   string s2 = "a" + s;
   s += 'a';
   bool d = check(s);
   if (d == true)
   {
    cout << s2 << nl;
   } else
   {
    cout << s << nl;
   }
   // cout << s << " " << s2 << endl;
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