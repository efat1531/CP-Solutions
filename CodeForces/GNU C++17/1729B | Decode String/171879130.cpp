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
  int a;
  cin>>a;
  string s;
  cin>>s;
  string s1="";
  for(int i=a-1;i>=0;)
  {
   if(s[i]=='0' and i-2>=0)
   {
    int n=(10*(s[i-2]-'0')+(s[i-1]-'0'));
    s1+='a'+(n-1);
    i-=3;
   }else
   {
    s1+='a'+((s[i]-'0')-1);
    i--;
   }
  }
  for(int i=s1.size()-1;i>=0;i--)
   cout<<s1[i];
  cout nl;
 }
}
 
int main()
{
    fast_io;
    solve();
}