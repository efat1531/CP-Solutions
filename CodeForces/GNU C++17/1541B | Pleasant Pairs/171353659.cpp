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
  int ar[(2*n)+1];
  memset(ar,-1,sizeof ar);
  for(int i=1;i<=n;i++)
  {
   int a;
   cin>>a;
   ar[a]=i;
  }
  ll ans=0;
  for(int i=3;i<2*n;i++)
  {
   for(int j=1;j*j<=i;j++)
   {
    if(i%j==0)
    {
     if(ar[j]!=-1 and i/j!=j and ar[i/j]!=-1 and ar[j]+ar[i/j]==i)
      ans++;
    }
   }
  }
  cout<<ans nl;
 }
}
 
int main()
{
    fast_io;
    solve();
}