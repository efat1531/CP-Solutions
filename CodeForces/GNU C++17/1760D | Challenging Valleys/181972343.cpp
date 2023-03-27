// Author - Sp3cTer
// Date   - 21 - 11 - 2022
// Time   - 20 - 35
 
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
 int ar[n];
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
 }
 map<int,int>mp;
 vector<pair<int,int>>vp;
 int st=0;
 for(int i=0;i<n;i++)
 {
     mp[ar[i]]++;
     if(mp.size()==1)
  continue;
     else if(mp.size()>1)
     {
  vp.push_back({st,i-1});
  mp.clear();
  mp[ar[i]]++;
  st=i;
     }
 }
 vp.push_back({st,n-1});
 int count=0;
 for(auto x:vp)
 {
     bool lans=false,rans=false;
  int a=x.first;
  int b=x.second;
  //cout<<a<<" "<<b<<endl;
  if(a!=0 and ar[a-1]>ar[a])
  {
      lans=true;
  }else if(a==0)
  {
     lans=true;
  }
  if(b!=n-1 and ar[b+1]>ar[b])
  {
      rans=true;
  }else if(b==n-1)
      rans=true;
      
  if(lans==true and rans==true)
  {
     count++;
  }
 }
 if(count==1)
     cout<<"YES" nl;
 else 
     cout<<"NO" nl;
    }
}
 
int32_t main() {
fast_io;
  solve();
  return 0;
}