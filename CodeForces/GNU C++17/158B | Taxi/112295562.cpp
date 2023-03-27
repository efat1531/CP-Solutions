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
#define ull                     unsigned long long int
 
#define pb                       push_back
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
#define testcase(t)                  int t ; cin>>t ; while(t--)
#define all(x)                        (x).begin(), (x).end()
#define setbits(x)                    __builtin_popcountll(x)
#define zrobits(x)                    __builtin_ctzll(x)
#define prDouble(x)                   cout << fixed << setprecision(10) << x<<endl
#define lcm(a,b)                      (a*b)/__gcd(a,b);
#define erase(a,b)                    a.erase(a.begin()+(b-1))
#define sortof(x)                     sort((x).begin(),(x).end());
#define printvec(x,n)                 for(int i=0;i<(n);i++)cout<<(x)[i]<<" ";cout<<endl
 
#define db(x)                         cout<<#x <<"=" <<x<<endl
#define time                          cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define fast_io                       ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
 
void solve()
{
 read(n);
 int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
 int sum = 0;
 fr(0, n)
 {
  read(a);
  if (a == 1)c1++;
  else if (a == 2)c2++;
  else if (a == 3)c3++;
  else if (a == 4)c4++;
  sum += a;
 }
 // db(c1);
 // db(c2);
 // db(c3);
 // db(c4);
 // db(sum);
 if (sum <= 4)cout << 1 << endl;
 else
 {
  if (c1 >= c3)
  {
   c1 -= c3;
   c4 += c3;
   c3 = 0;
  } else if (c3 > c1)
  {
   c4 += c3;
   c1 = 0;
  }
  if (c2 % 2 == 0)
  {
   c4 += c2 / 2;
   c2 = 0;
  } else
  {
   c4 += c2 / 2;
   if (c1 > 0)
   {
    c2 = 0;
    c1 -= 2;
    c4++;
 
   } else
   {
    c4 += 1;
    c2 = 0;
 
   }
  }
  if (c1 % 4 == 0)
  {
   c4 += c1 / 4;
 
  } else if (c1 > 0)
  {
   c4 += c1 / 4;
   c4 += 1;
 
  }
  // db(c1);
  // db(c2);
  // db(c3);
  // db(c4);
  print(c4);
 
 
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
 init_code();
 solve();
 time;
 return 0;
}