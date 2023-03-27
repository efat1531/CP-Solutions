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
 ll n,k;
 cin>>n>>k;
 priority_queue<pair<ll,ll>>pq;
 map<ll,int>mp;
 ll hp[n],pw[n];
 for(int i=0;i<n;i++)
     cin>>hp[i];
 for(int i=0;i<n;i++)
     cin>>pw[i];
 for(int i=0;i<n;i++)
 {
     ll hpi,pwi;
     hpi=hp[i];
     pwi=pw[i];
     if(hpi>k)
     {
  pq.push({-hpi,pwi});
  mp[pwi]++;
     }
 }
 ll init=k;
 while(!pq.empty()!=0 and k>0)
 {
     ll temp=0;
     for(auto x:mp)
     {
  temp=x.first;
  //cout<<temp<<" -> MP -> "<<x.second nl;
  if(x.second>0)
      break;
     }
     k-=temp;
     init+=k;
     while(!pq.empty())
     {
  pair<int,int>pr=pq.top();
  if(-pr.first<=init)
  {
      pq.pop();
      mp[pr.second]--;
  }else
  {
      break;
  }
     }
 }
 if(pq.empty())
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