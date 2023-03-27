// ============================================================================ //
// ||                                                                        || //
// ||             International University of Business,Agriculture           || //
// ||                           And Technology                               || //
// ||                             Efat Sikder                                || //
// ||                    Bismillah-ir-Rahman-ir-Rahim                        || //
// ||                                                                        || //
// ============================================================================ //
#include<bits/stdc++.h>
 
#define int                     long long
#define ld                      long double
#define ull                     unsigned long long
 
#define pb                       push_back
#define ff                            first
#define ss                            second
#define pp                            pop_back
#define mp                      make_pair
#define vin                     vector<int>
#define vch                           vector<char>
#define vst                           vector<string>
#define pii                         pair<int,int>
#define triplet                       pair<ll,pair<ll,ll>>
#define mpin                          map<int,int>
#define mod                           1000000007
#define pi                            2 * acos (0.0)
 
#define print(x)                   printf("%lld\n",x)
#define input(x)                      scanf("%lld",&x)
#define stringin(x)                   scanf(" %[^\n]%*c", x)
#define sz(x)                         (x).size()
#define read(x)                       int x; cin >> x;
#define loj(case_no,result)           cout<<"Case "<<case_no<<": "<<result<<endl
#define loj2(case_no,result)        cout<<"Case "<<case_no<<":"<<endl<<result<<endl
#define fr(a,b)                       for(int i = a; i < b; i++)
#define frc(a,b)                      for(int i = a; i > b; i--)
#define rep(i,a,b)                    for(int i = a; i < b; i++)
#define testcase(t,x)                 int t; cin>>t; for(int x=1 ; x<=t ; x++)
#define all(x)                        (x).begin(), (x).end()
#define setbits(x)                    __builtin_popcountll(x)
#define zrobits(x)                    __builtin_ctzll(x)
#define prDouble(x,y)                 cout << fixed << setprecision(y) << x<<endl
#define lcm(a,b)                      (a*b)/__gcd(a,b);
#define erase(a,b)                    a.erase(a.begin()+(b-1))
#define sortof(x)                     sort((x).begin(),(x).end());
#define printvec(x,n)                 for(int i=0;i<(n);i++)cout<<(x)[i]<<" ";cout<<endl
 
#define db(x)                         cout<<#x <<"=" <<x<<endl
#define time                          cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define starttime                     auto t1 = chrono::high_resolution_clock::now();
#define endtime                       auto t2 = chrono::high_resolution_clock::now(); std::chrono::duration<double, milli> elapsed = t2 - t1;cerr << "Program Runtime is: " << elapsed.count() << " milliseconds."<<endl;
 
#define fast_io                       ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
 
void solve()
{
 int t;
 cin >> t;
 while (t--)
 {
  bool f = 0;
  int r, g, b, w;
  cin >> r >> g >> b >> w;
  int odd1 = 0, odd2 = 0;
  if (r % 2 != 0)odd1++;
  if (g % 2 != 0)odd1++;
  if (b % 2 != 0)odd1++;
  if (w % 2 != 0)odd1++;
  //cout<<odd1<<endl;
  if (odd1 > 1)
  {
   if (r != 0 && g != 0 && b != 0)
   {
    r -= 1;
    g -= 1;
    b -= 1;
    w += 1;
    if (r % 2 != 0)odd2++;
    if (g % 2 != 0)odd2++;
    if (b % 2 != 0)odd2++;
    if (w % 2 != 0)odd2++;
    if (odd2 <= 1)f = 1;
   }
  } else f = 1;
 
  if (f == 1)cout << "YES" << endl;
  else cout << "NO" << endl;
 }
 
}
 
void init_code() {
 fast_io;
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
}
 
int32_t main()
{
 starttime;
 init_code();
 solve();
 endtime;
 return 0;
}