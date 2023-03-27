// Author - Sp3cTer
// Date   - 21 - 11 - 2022
// Time   - 20 - 35
 
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
    testcase(tt,t){
 int n;
 cin>>n;
 int ar[n],br[n],cr[n];
 //int onec=0,zeroc=0;
 int pre1[n],pre0[n];
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
     br[i]=ar[i];
     cr[i]=ar[i];
     if(i==0)
     {
  if(ar[i]==1)
      pre1[i]=1,pre0[i]=0;
  else
      pre0[i]=1,pre1[i]=0;
     }else
     {
  if(ar[i]==1)
      pre1[i]=pre1[i-1]+1,pre0[i]=pre0[i-1]+0;
  else
      pre0[i]=pre0[i-1]+1,pre1[i]=pre1[i-1]+0;
     }
 }
 ll current=0;
 for(int i=0;i<n;i++)
 {
     if(ar[i]==1)
     {
  current+=pre0[n-1]-pre0[i];
     }
 }
 //2nd
 for(int i=n-1;i>-1;i--)
     if(br[i]==1)
     {
  br[i]=0;
  break;
     }
 for(int i=0;i<n;i++)
 {
     if(i==0)
     {
  if(br[i]==1)
      pre1[i]=1,pre0[i]=0;
  else
      pre0[i]=1,pre1[i]=0;
     }else
     {
  if(br[i]==1)
      pre1[i]=pre1[i-1]+1,pre0[i]=pre0[i-1]+0;
  else
      pre0[i]=pre0[i-1]+1,pre1[i]=pre1[i-1]+0;
     }
 }
 ll current2=0;
 for(int i=0;i<n;i++)
 {
     if(br[i]==1)
     {
  current2+=pre0[n-1]-pre0[i];
     }
 }
 //3rd 
 for(int i=0;i<n;i++)
     if(cr[i]==0)
     {
  cr[i]=1;
  break;
     }
 for(int i=0;i<n;i++)
 {
     if(i==0)
     {
  if(cr[i]==1)
      pre1[i]=1,pre0[i]=0;
  else
      pre0[i]=1,pre1[i]=0;
     }else
     {
  if(cr[i]==1)
      pre1[i]=pre1[i-1]+1,pre0[i]=pre0[i-1]+0;
  else
      pre0[i]=pre0[i-1]+1,pre1[i]=pre1[i-1]+0;
     }
 }
 ll current3=0;
 for(int i=0;i<n;i++)
 {
     if(cr[i]==1)
     {
  current3+=pre0[n-1]-pre0[i];
     }
 }
 //cout<<current<<" "<<current2<<" "<<current3 nl;
 cout<<max(current,max(current2,current3)) nl;
    }
    
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}