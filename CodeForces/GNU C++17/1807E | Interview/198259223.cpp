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
 ll ar[n+1];
 ll pre[n+1];
 ar[0]=0;
 pre[0]=0;
 ll sum=0;
 for(int i=1;i<=n;i++)
 {
     cin>>ar[i];
     sum+=ar[i];
     pre[i]=sum;
 }
 ll low=1,high=n;
 ll mid;
 while(low<=high)
 {
     mid=(low+high)/2;
     if(low==high)
  break;
     ll ele=mid-low+1;
     //query
     cout<<"? "<<ele<<" ";
     for(int i=low;i<=mid;i++)
  cout<<i<<" ";
     cout nl;
     cout<<flush;
     ll sum2;
     cin>>sum2;
     //cout<<"Debug "<<pre[mid]-pre[low-1]<<" "<<pre[high]-pre[mid]<<endl;
     if(pre[mid]-pre[low-1]!=sum2)
     {
  high=mid;
     }else
     {
  low=mid+1;
     }
     //cout<<"Debug L "<<low<<" "<<high nl;
     
 }
 cout<<"! "<<high<<endl;
 cout<<flush;
    }
}
 
int32_t main() {
  //fast_io;
  solve();
  return 0;
}