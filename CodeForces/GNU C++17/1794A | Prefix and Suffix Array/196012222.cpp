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
 map<string,int>mp;
 int m=(2*n)-2;
 vector<string>v;
 for(int i=0;i<m;i++)
 {
     string s;
     cin>>s;
     if(s.size()==n-1)
     {
  v.push_back(s);
     }
 }
 string s1=v[0];
 string s2=v[1];
 reverse(s1.begin(),s1.end());
 if(s1==s2)
     cout<<"Yes" nl;
 else
     cout<<"No" nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}