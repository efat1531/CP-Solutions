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
#define debug_array(x) cout<<"Array -> [ ";for(auto a:x) cout<<a<< " ";cout<<"]\n";
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
  int a,bx,by;
  cin>>a>>bx>>by;
  int tm=0;
  if(by>=bx)
  {
   tm+=by-bx;
   tm+=by-1;
  }else
  {
   tm+=bx-1;
  }
  if((a-1)<tm)
   cout<<1 nl;
  else if((a-1)>tm)
   cout<<2 nl;
  else
   cout<<3 nl;
 }
}
 
int main()
{
    fast_io;
    solve();
}