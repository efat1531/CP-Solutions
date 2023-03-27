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
 
const int MaxN=2e5+5;
vector<int>Graph[MaxN];
bool mark[MaxN];
 
void dfs(int node,vector<int>&pos)
{
    mark[node]=true;
    pos.push_back(node);
    for(auto i:Graph[node])
    {
 if(!mark[i])
     dfs(i,pos);
    }
}
 
void solve() {
    testcase(tt,t)
    {
        int n,k;
        cin>>n>>k;
        string s1,s2;
        cin>>s1>>s2;
        memset(mark,false,sizeof mark);
        for(int i=0; i<n; i++)
        {
            if(i+k<n)
            {
                Graph[i].push_back(i+k);
                Graph[i+k].push_back(i);
            }
            if(i+k+1<n)
            {
                Graph[i].push_back(i+k+1);
                Graph[i+k+1].push_back(i);
            }
        }
        string ans="YES";
        for(int i=0; i<n; i++)
        {
            vector<int>pos;
            if(!mark[i])
                dfs(i,pos);
            string s11="";
            string s22="";
            for(auto j:pos)
            {
                s11+=s1[j];
                s22+=s2[j];
            }
            sort(s11.begin(),s11.end());
            sort(s22.begin(),s22.end());
            if(s11!=s22)
            {
                ans="NO";
                break;
            }
        }
        cout<<ans nl;
        for(int i=0; i<n; i++)
            Graph[i].clear();
    }
}
 
int32_t main() {
  fast_io;
  solve();
  return 0;
}