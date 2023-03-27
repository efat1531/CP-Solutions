#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef unsigned long long l1;
typedef double db;
#define pi 2 * acos(0.0)
#define sz(x) (x).size()
#define read(x) \
  int x;        \
  cin >> x
#define prDouble(x, y) fixed << setprecision(y) << x
#define lcm(a, b) (a * b) / __gcd(a, b);
#define sortof(x) sort((x).begin(), (x).end());
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define mm(x, v) memset((x), v, sizeof(x));
#define testcase(t, x) \
  int t;               \
  cin >> t;            \
  for (int x = 1; x <= t; x++)
#define nl << "\n"
 
vector<int>adj[30];
int degree[30];
 
vector<int>toposort(int n)
{
    queue<int>q;
    for(int i=0;i<n;i++)
    {
 if(degree[i]==0)
     q.push(i);
    }
    vector<int>order;
    while(!q.empty())
    {
 int cur=q.front();
 q.pop();
 order.push_back(cur);
 for(int i:adj[cur])
 {
     degree[i]--;
     if(degree[i]==0)
  q.push(i);
 }
    }
    return order;
}
 
void solve() {
    int n;
    cin>>n;
    vector<string>vs;
    bool pos=true;
    for(int i=0;i<n;i++) 
    {
 string s;
 cin>>s;
 vs.push_back(s);
    }
    for(int i=0;i<n-1;i++)
    {
 bool found=false;
 for(int j=0;j<min(vs[i].size(),vs[i+1].size());j++)
 {
     if(vs[i][j]!=vs[i+1][j])
     {
  found=true;
  int u=vs[i][j]-'a';
  int v=vs[i+1][j]-'a';
  adj[u].push_back(v);
  degree[v]++;
  break;
     }
 }
 if(!found)
 {
     if(vs[i].size()>vs[i+1].size())
     {
  pos=false;
  break;
     }
 }
    }
    if(!pos)
    {
 cout<<"Impossible" nl;
 return;
    }
    vector<int>ans=toposort(26);
    if(ans.size()!=26)
    {
 cout<<"Impossible" nl;
 return;
    }
    for(auto x:ans)
    {
 char c='a';
 c+=x;
 cout<<c;
    }
    cout nl;
    //~ for(int i=0;i<26;i++)
    //~ {
 //~ char c='a';
 //~ c=c+i;
 //~ cout<<"Degree of "<<c<<" is = "<<degree[i] nl;
    //~ }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}