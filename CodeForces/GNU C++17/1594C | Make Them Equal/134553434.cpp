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
typedef long double                   ld;
 
// ============================================Define Macros============================================================== //
 
#define int                           long long int
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
#define mm(x,v)                       memset((x),v,sizeof(x));
 
// =======================================Define Statements=============================================================== //
 
#define print(x)                   printf("%lld\n",x)
#define input(x)                      scanf("%lld",&x)
#define stringin(x)                   scanf(" %[^\n]%*c", x)
#define sz(x)                         (x).size()
#define read(x)                       int x; cin >> x;
#define fr(a,b)                       for(int i = a; i < b; i++)
#define testcase(t,x)                 int t; cin>>t; for(int x=1 ; x<=t ; x++)
#define all(x)                        (x).begin(), (x).end()
#define erase(a,b)                    a.erase(a.begin()+(b-1))
#define prDouble(x,y)                 fixed << setprecision(y) << x<<endl
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
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
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
 
// ==========================================Main Code Goes Here========================================================== //
 
void solve() {
 testcase(tt, t)
 {
  read(n);
  char c;
  cin >> c;
  string s;
  cin >> s;
  bool f = false;
  int ll = 0;
  fr(0, n)
  {
   if (s[i] != c)
   {
    f = true;
   } else
   {
    ll = i + 1;
   }
  }
  if (f == true)
  {
   bool f1 = false;
   debug(t)
   debug(ll)
   dbn
   if (ll > 0)
   {
    fr(0, n)
    {
     if (s[i] != c and (i + 1) % ll == 0)
     {
      f1 = true;
      break;
     }
    }
   } else f1 = true;
   if (f1 == true)
   {
    if (s[n - 1] == c or s[n - 2] == c)
    {
     cout << 1 nl;
     if (s[n - 1] == c)
      cout << n - 1 nl;
     else
      cout << n nl;
    } else
    {
     cout << 2 nl;
     cout << n - 1 << " " << n nl;
    }
   } else
    cout << 1 nl, cout << ll nl;
  } else
   cout << 0 nl;
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