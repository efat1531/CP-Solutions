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
int n;
int ar[105];
bool alice_win(int k)
{
 multiset<int>ms;
 for(int i=0;i<n;i++)
  ms.insert(ar[i]);
 for(int i=1;i<=k;i++)
 {
  int val=k-i+1;
  auto it=ms.upper_bound(val);
  if(it==ms.begin())
   return false;
  it--;
  ms.erase(it);
  if(!ms.empty())
  {
   it=ms.begin();
   int a= *it;
   ms.erase(it);
   a+=val;
   ms.insert(a);
  }
 }
 return true;
}
 
void solve() {
  // My code My Rule
  testcase(tt,t){
 cin>>n;
 for(int i=0;i<n;i++)
  cin>>ar[i];
 int low=0,high=n;
 int mid;
 while(low<=high)
 {
  mid=(low+high)/2;
  if(alice_win(mid))
   low=mid+1;
  else
   high=mid-1;
 }
 cout<<high<<endl;
  
  }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}