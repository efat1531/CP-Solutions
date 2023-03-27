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
 
bool end(int sa,int sb,int ra,int rb)
{
 if(sa>(sb+rb))
  return true;
 else if(sb>(sa+ra))
  return true;
 
 return false;
}
 
int sA(string s)
{
 int A=0,B=0,RA=5,RB=5;
 int ans=0;
 for(int i=0;i<10;i+=2)
 {
  if(end(A,B,RA,RB))
   return ans;
  else if(s[i]=='1' or s[i]=='?')
   A++,RA--;
  else 
   RA--;
  ans++;
  if(end(A,B,RA,RB))
   return ans;
  else if(s[i+1]=='1')
   B++,RB--;
  else
   RB--;
  ans++;
 }
 return ans;
}
 
int sB(string s)
{
 int A=0,B=0,RA=5,RB=5;
 int ans=0;
 for(int i=0;i<10;i+=2)
 {
  if(end(A,B,RA,RB))
   return ans;
  else if(s[i]=='1')
   A++,RA--;
  else
   RA--;
  ans++;
  if(end(A,B,RA,RB))
   return ans;
  else if(s[i+1]=='1' or s[i+1]=='?')
   B++,RB--;
  else
   RB--;
  ans++;
 }
 return ans;
}
 
void solve()
{
    testcase(tt,t)
    {
  string s;
  cin>>s;
  cout<<min(sA(s),sB(s)) nl;
 }
}
 
int main()
{
    fast_io;
    solve();
}