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
const ll inf=0x3f3f3f3f3f3f3f3f;
 
void solve() {
    testcase(tt,t)
    {
 ll n;
 cin>>n;
 int cnt0=0;
 priority_queue<ll>pos,neg;
 for(ll i=0;i<n;i++)
 {
     ll a;
     cin>>a;
     if(a>0)
  pos.push(a);
     else if(a<0)
  neg.push(-a);
     else
  cnt0++;
 }
 //cout<<"Input done" nl;
 if(pos.empty() or neg.empty())
 {
     cout<<"No" nl;
     continue;
 }
 ll mark=pos.top()+neg.top();
 ll cur=0;
 vector<ll>v;
 bool ans=true;
 //int ct=0;
 while(1)
 {
     int a=0;
     //cout<<pos.size()<<" "<<neg.size() nl;
     if(pos.size())
     {
  a=pos.top();
  pos.pop();
     }else if(neg.size())
     {
  a=neg.top();
  a*=-1;
  neg.pop();
     }else
     {
  break;
     }
     if(abs(cur+a)>=mark)
     {
  while(cur+a>=mark)
  {
   while(neg.size() and cur+a>=mark)
   {
    cur-=neg.top();
    v.push_back(-neg.top());
    neg.pop();
   }
   if(cur+a>=mark)
   {
    ans=false;
    break;
   }
  }
     }
     cur+=a;
     v.push_back(a);
     //cout<<cur<<" "<<ct++ nl;
     
 }
 if(ans==false)
 {
     cout<<"No" nl;
     continue;
 }
 while(cnt0>0)
     v.push_back(0),cnt0--;
 cout<<"Yes" nl;
 for(auto x:v)
     cout<<x<<" ";
 cout nl;
    }
}
 
int32_t main() {
  //fast_io;
  solve();
  return 0;
}