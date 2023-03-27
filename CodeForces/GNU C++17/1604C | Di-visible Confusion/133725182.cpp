#include<bits/stdc++.h>
 
#define int                     long long int
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
#define test(t)                       int t; cin>>t; while(t--)
#define all(x)                        (x).begin(), (x).end()
#define setbits(x)                    __builtin_popcountll(x)
#define zrobits(x)                    __builtin_ctzll(x)
#define prDouble(x,y)                 fixed << setprecision(y) << x<<endl
#define lcm(a,b)                      (a*b)/__gcd(a,b);
#define erase(a,b)                    a.erase(a.begin()+(b-1))
#define sortof(x)                     sort((x).begin(),(x).end());
#define printvec(x)                 for(int i=0;i<sz(x);i++)cout<<(x)[i]<<" ";cout<<endl
 
#define db(x)                         cout<<#x <<"=" <<x<<endl
#define fast_io                       ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
 
void solve()
{
 test(t)
 {
  int n;
  cin >> n;
  int ar[n + 1];
  for (int i = 1; i <= n; i++) cin >> ar[i];
  //db(k);
  bool arr[n+1];
  memset(arr, false, sizeof(arr));
  for (int i = 1; i <=n; i++)
  {
   for (int j = i + 1; j >= 2; j--)
   {
    if (ar[i] % j != 0)
    {
     //db(arr[i]);
     arr[i] = true;
     //db(arr[i]);
     break;
    }
   }
  }
  bool f = false;
  for (int i = 1; i <=n; i++)
  {
   //db(arr[i]);
   if (arr[i] == false)
   {
    f = true;
    break;
   }
  }
  if (f == true)
   cout << "NO" << endl;
  else cout << "YES" << endl;
 }
 
}
 
int32_t main()
{
    fast_io;
 solve();
 return 0;
}