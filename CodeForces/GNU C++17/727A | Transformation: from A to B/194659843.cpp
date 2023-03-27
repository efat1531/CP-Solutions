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
 
ll a,b;
vector<int>temp;
vector<int>ans_vec;
bool ans=false;
 
void DFS(ll x,int op)
{
    temp.push_back(x);
    if(x>b)
    {
 temp.pop_back();
 return;
    }
    if(x==b)
    {
 cout<<"YES" nl;
 cout<<op nl;
 ans=true;
 ans_vec=temp;
 return;
    }
    op++;
    DFS(x*2,op);
    DFS((x*10)+1,op);;
    temp.pop_back();
}
 
void solve() {
    cin>>a>>b;
    DFS(a,1);
    if(ans==true)
    {
        for(auto x:ans_vec)
     cout<<x<<" ";
 cout nl;
    } else
        cout<<"NO" nl;
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}