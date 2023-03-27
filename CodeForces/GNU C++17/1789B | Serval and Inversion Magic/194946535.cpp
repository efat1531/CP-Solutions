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
bool is_palindrome(string s)
{
    for(int i=0,j=n-1;i<=j;i++,j--)
 if(s[i]!=s[j])
     return false;
    return true;
}
 
void solve() {
    testcase(tt,t)
    {
 cin>>n;
 string s;
 cin>>s;
 if(is_palindrome(s))
 {
     cout<<"YES" nl;
     continue;
 }
 int op=0;
 bool op_apply=false;
 for(int i=0,j=n-1;i<j;i++,j--)
 {
     if(s[i]!=s[j] and op_apply==false)
  op++,op_apply=true;
     else if(s[i]==s[j] and op_apply==true)
  op_apply=false;
 }
 if(op>1)
     cout<<"NO" nl;
 else
     cout<<"YES" nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}