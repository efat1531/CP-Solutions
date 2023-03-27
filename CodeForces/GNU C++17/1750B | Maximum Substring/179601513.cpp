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
    testcase(tt,t)
    {
 int n;
 cin>>n;
 string s;
 cin>>s;
 s+='a';
 ll x=0,y=0;
 for(int i=0;i<n;)
 {
     ll cnt=0;
     if(s[i]=='0')
     {
  for(int j=i;j<=n;j++)
  {
      if(s[j]=='0')
   cnt++;
      else
      {
   i=j,x=max(x,cnt),cnt=0;
   break;
      }
  }
     }
     if(s[i]=='1')
     {
  for(int j=i;j<=n;j++)
  {
      if(s[j]=='1')
   cnt++;
      else
      {
   i=j,y=max(y,cnt),cnt=0;
   break;
      }
  }
     }
 }
 ll x1=0,y1=0;
 for(int i=0;i<n;i++)
 {
     if(s[i]=='0')
  x1++;
     else
  y1++;
 }
 x=x*x;
 y=y*y;
 ll a=x1*y1;
 cout<<max(x,max(y,a))<<endl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}