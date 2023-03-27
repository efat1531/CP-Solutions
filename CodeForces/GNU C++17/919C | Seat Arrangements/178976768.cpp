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
  // My code My Rule
  ll n,m,k;
  cin>>n>>m>>k;
  vector<string>vs;
  for(int i=0;i<n;i++)
  {
   string s;
   cin>>s;
   vs.push_back(s);
  }
  vector<ll>v;
  //Row only
  for(int i=0;i<n;i++)
  {
   string s=vs[i];
   int cnt=0;
   for(int j=0;j<m;j++)
   {
    if(s[j]=='.')
   cnt++;
    if(s[j]=='*')
    {
     if(cnt>=k)
    v.push_back(cnt),cnt=0;
     else 
    cnt=0;
    }
   }
   if(cnt>=k)
  v.push_back(cnt);
  }
  //Collumn Only
  for(int j=0;j<m;j++)
  {
   ll cnt=0;
   for(int i=0;i<n;i++)
   {
  string s=vs[i];
  if(s[j]=='.')
   cnt++;
  if(s[j]=='*')
  {
   if(cnt>=k)
    v.push_back(cnt),cnt=0;
   else
    cnt=0;
  }
   }
   if(cnt>=k)
  v.push_back(cnt);
  }
  ll ans=0;
  for(auto x:v)
 ans+=(x-k+1);
 
  if(k==1)
 ans/=2;
  cout<<ans nl;
  
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}