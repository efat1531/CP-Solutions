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
 
const int MaxN=2e5+5;
vector<ll>Graph[MaxN];
vector<ll>CostA[MaxN];
vector<ll>CostB[MaxN];
vector<ll>temp;
ll pre_cost[MaxN];
ll answer[MaxN];
 
void Pre_cal(int node)
{
    for(int i=0;i<Graph[node].size();i++)
    {
 int child=Graph[node][i];
 pre_cost[child]=pre_cost[node]+CostA[node][i];
 Pre_cal(child);
    }
}
 
void DFS(int node)
{
    for(int i=0; i<Graph[node].size(); i++)
    {
        ll sum;
        if(temp.size()==0)
            sum=CostB[node][i];
        else
            sum=temp[sz(temp)-1]+CostB[node][i];
        temp.push_back(sum);
        DFS(Graph[node][i]);
    }
    // cout<<"Sum for Node "<<node<<" -> [ ";
    // for(auto x:temp)
        // cout<<x<<" ";
    // cout<<"]\n";
    if(node!=1)
    {
        ll pref=pre_cost[node];
        auto ans=upper_bound(temp.begin(),temp.end(),pref)-temp.begin();
        //cout<<"Answer is -> "<<ans nl;
 answer[node]=ans;
    }
    if(temp.size())
        temp.pop_back();
 
}
 
void solve() {
    testcase(tt,t){
 int n;
 cin>>n;
 for(int i=2;i<=n;i++)
 {
     int par;
     ll c1,c2;
     cin>>par>>c1>>c2;
     int u=i,v=par;
     Graph[v].push_back(u);
     CostA[v].push_back(c1);
     CostB[v].push_back(c2);
 }
 Pre_cal(1);
 // cout<<"Pre Cost [ ";
 // for(int i=1;i<=n;i++)
     // cout<<pre_cost[i]<<" ";
 // cout<<"]" nl;
 DFS(1);
 for(int i=2;i<=n;i++)
     cout<<answer[i]<<" ";
 cout nl;
 for(int i=0;i<n;i++)
 {
     Graph[i].clear();
     CostA[i].clear();
     CostB[i].clear();
 }
 memset(answer,0,sizeof answer);
 memset(pre_cost,0,sizeof pre_cost);
 temp.clear();
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}