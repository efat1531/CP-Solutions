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
 map<char,int>mp;
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 for(int i=0;i<n;i++)
     mp[s[i]]++;
 string up="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 string low="abcdefghijklmnopqrstuvwxyz";
 int ans=0;
 for(int i=0;i<26;i++)
 {
     int a=min(mp[up[i]],mp[low[i]]);
     mp[up[i]]-=a;
     mp[low[i]]-=a;
     ans+=a;
 }
 for(auto x:mp)
 {
     if(x.second>=2)
     {
  int a=x.second/2;
  x.second=0;
  if(a<k)
      k-=a;
  else
      a=k,k=0;
  ans+=a;
     }
 }
 cout <<ans nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}