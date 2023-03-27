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
  int n;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++)
   cin>>ar[i];
  if(ar[0]==1)
  {
   cout<<n+1<<" ";
   for(int i=1;i<=n;i++)
    cout<<i<<" ";
   cout nl;
  }else
  {
   int indx=-1;
   for(int i=0;i<n-1;i++)
   {
    cout<<i+1<<" ";
    if(ar[i]==0 and ar[i+1]==1)
    {
     cout<<n+1<<" "; 
     indx=i+1;
     break;
    }
     
   }
   if(indx==-1)
    cout<<n<<" "<<n+1 nl;
   else
   {
    for(int i=indx;i<n;i++)
     cout<<i+1<<" ";
    cout nl;
   }
  }
 }
}
 
int main()
{
    fast_io;
    solve();
}