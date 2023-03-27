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
    long long int n,k,x;
    cin>>n>>k>>x;
    ll ar[n];
    for(int i=0;i<n;i++)
  cin>>ar[i];
 sort(ar,ar+n);
 ll nog=1;
 vector<ll>Group_Dif;
 //debug_array(ar);
 for(int i=1;i<n;i++)
 {
  if(ar[i]-ar[i-1]>x)
   nog++,Group_Dif.push_back(ar[i]-ar[i-1]);
 }
 //cout<<nog nl;
 //debug_array(Group_Dif);
 sortof(Group_Dif);
 for(int i=0;i<Group_Dif.size();i++)
 {
   ll pn=(Group_Dif[i]-1)/x;
  if(pn<=k)
   nog--,k-=pn;
 }
 cout<<nog nl;
}
 
int main()
{
    fast_io;
    solve();
}