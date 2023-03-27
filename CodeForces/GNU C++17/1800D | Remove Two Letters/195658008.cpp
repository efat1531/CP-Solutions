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
 string s;
 cin>>s;
 string s1="";
 for(int i=0;i<n;i++)
 {
     if(i==0 or i==1)
     {
  s1+=s[i];
  continue;
     }
     if(s[i]==s1[s1.size()-1] and s[i]==s1[s1.size()-2])
  continue;
     s1+=s[i];
 }
 ll ans=0;
 string s2="";
 //cout<<s1 nl;
 for(int i=0;i<s1.size()-1;i++)
 {
     if(i==0)
     {
  s2+=s1[0];
  s2+=s1[1];
  ans++;
  continue;
     }
     string s3="";
     s3+=s1[i];
     s3+=s1[i+1];
     if(s3[0]==s2[1] and s3[1]==s2[0])
     {
  s2=s3;
     }else
     {
  s2=s3;
  ans++;
     }
     //cout<<ans<<" "<<s2<<" "<<s3 nl;
  
 }
 cout<<ans nl;
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}