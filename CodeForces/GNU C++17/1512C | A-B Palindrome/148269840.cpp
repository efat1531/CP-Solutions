// ============================================================================ //
// ||                                                                        || //
// ||             International University of Business Agriculture           || //
// ||                            And Technology                              || //
// ||                             Efat Sikder                                || //
// ||                    Bismillah-ir-Rahman-ir-Rahim                        || //
// ||                                                                        || //
// ============================================================================ //
// ======================================================================================================================= //
 
#include<bits/stdc++.h>
using namespace std;
 
// ======================================================================================================================= //
 
typedef unsigned long long            ull;
typedef bool                          flag;
const int                             N = 1e3 + 1;
// ============================================Define Macros============================================================== //
 
#define int                           long long int
#define double                        long double
#define pb                       push_back
#define ff                            first
#define ss                            second
#define pp                            pop_back
#define mp                      make_pair
#define vin                     vector<int>
#define vch                           vector<char>
#define vst                           vector<string>
#define pii                         pair<int,int>
#define triplet                       pair<int,pair<int,int>>
#define mpin                          map<int,int>
#define nl                            <<"\n"
#define mod                           1000000007
#define pi                            2 * acos (0.0)
 
// =======================================Define Statements=============================================================== //
 
#define print(x)                   printf("%lld\n",x)
#define input(x)                      scanf("%lld",&x)
#define stringin(x)                   scanf(" %[^\n]%*c", x)
#define sz(x)                         (x).size()
#define read(x)                       int x; cin >> x
#define fr(a,b)                       for(int i = a; i < b; i++)
#define mm(x,v)                       memset((x),v,sizeof(x));
#define testcase(t,x)                 int t; cin>>t; for(int x=1 ; x<=t ; x++)
#define all(x)                        (x).begin(), (x).end()
#define erase(a,b)                    a.erase(a.begin()+(b-1))
#define prDouble(x,y)                 fixed << setprecision(y) << x
#define lcm(a,b)                      (a*b)/__gcd(a,b);
#define sortof(x)                     sort((x).begin(),(x).end());
#define fast_io                       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
// ======================================Debugger Code for IDE============================================================ //
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr nl;
#else
#define debug(x)
#endif
#define dbn cerr nl;
 
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
void _print(bool t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
// ===========================================Main Code Goes Here========================================================== //\
 
bool _checkPalindrome(string s)
{
 for (int i = 0, j = sz(s) - 1; i <= j; i++, j--)
 {
  if (s[i] != s[j])
   return false;
 }
 return true;
}
 
void solve() {
 //My code My Rules
 testcase(tt, t)
 {
  vector<int>v(2, 0);
  cin >> v[0] >> v[1];
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
   if (s[i] == '0' or s[i] == '1')
   {
    v[s[i] - '0']--;
   }
  }
  if (v[0] < 0 or v[1] < 0)
   s = "-1";
  else
  {
   for (int i = 0, j = s.size() - 1; i <= j; i++, j--)
   {
    if (s[i] != '?' and s[j] == '?')
     s[j] = s[i], v[s[i] - '0']--;
    else if (s[i] == '?' and s[j] != '?')
     s[i] = s[j], v[s[j] - '0']--;
   }
   for (int i = 0, j = s.size() - 1; i <= j; i++, j--)
   {
    if (s[i] == s[j] and s[i] == '?' and i != j)
    {
     if (v[0] >= v[1])
      v[0] -= 2, s[i] = '0', s[j] = '0';
     else
      v[1] -= 2, s[i] = '1', s[j] = '1';
    } else if (i == j and s[i] == '?')
    {
     if (v[0] >= v[1])
      v[0] -= 1, s[i] = '0';
     else
      v[1] -= 1, s[i] = '1';
    }
   }
   debug(s)
   debug(v)
   if (v[0] < 0 or v[1] < 0)
    s = "-1";
   else if (!_checkPalindrome(s))
    s = "-1";
   debug(s)
  }
  cout << s nl;
 }
}
// ===========================================Sublime IDE CODE============================================================ //
 
void init_code() {
 fast_io;
#ifndef ONLINE_JUDGE
 freopen("Error.txt", "w", stderr);
#endif
}
 
int32_t main() {
 init_code();
 solve();
 return 0;
}