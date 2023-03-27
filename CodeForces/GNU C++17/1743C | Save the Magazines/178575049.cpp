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
  testcase(tt,t){
 int n;
 cin>>n;
 string s;
 cin>>s;
 s+='0';
 int ar[n+1];
 for(int i=0;i<n;i++)
  cin>>ar[i];
 ar[n]=0;
 vector<int>v;
 int ans=0;
 bool is_zero=false;
 for(int i=0;i<=n;i++)
 {
  if(s[i]=='0' and is_zero==true)
  {
   if(v.size()!=0)
   {
    sortof(v);
    for(int j=1;j<v.size();j++)
     ans+=v[j];
    v.clear();
   }
   v.push_back(ar[i]);
  }else if(s[i]=='1')
   v.push_back(ar[i]);
  else{
   if(v.size()!=0)
   {
    sortof(v);
    for(int j=0;j<v.size();j++)
     ans+=v[j];
    v.clear();
   }
   is_zero=true;
   v.push_back(ar[i]);
  }
 }
 cout<<ans nl;
 v.clear();
  }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}