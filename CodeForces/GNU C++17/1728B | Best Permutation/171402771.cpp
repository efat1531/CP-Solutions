#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef unsigned long long l1;
typedef double db;
#define pi    2 * acos(0.0)
#define sz(x) (x).size()
#define read(x)                                                                                                        \
    int x;                                                                                                             \
    cin >> x
#define prDouble(x, y) fixed << setprecision(y) << x
#define lcm(a, b)      (a * b) / __gcd(a, b);
#define sortof(x)      sort((x).begin(), (x).end());
#define fast_io                                                                                                        \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL);                                                                                                     \
    cout.tie(NULL)
#define mm(x, v) memset((x), v, sizeof(x));
#define testcase(t, x)                                                                                                 \
    int t;                                                                                                             \
    cin >> t;                                                                                                          \
    for (int x = 1; x <= t; x++)
#define nl << "\n"
 
 
void solve()
{
    testcase(tt,t)
    {
  int n;
  cin>>n;
  vector<int>v(n);
  int i;
  if(n&1)
  {
   v[0]=1;
   v[1]=2;
   v[2]=3;
   i=4;
  }
  else
   v[0]=2,v[1]=1,i=3;
  for(int j=i-1;j<n-2;j+=2)
   v[j]=i+1,v[j+1]=i,i+=2;
  v[n-2]=n-1;
  v[n-1]=n;
  for(auto x:v)
   cout<<x<<" ";
  cout nl;
 }
}
 
int main()
{
    fast_io;
    solve();
}