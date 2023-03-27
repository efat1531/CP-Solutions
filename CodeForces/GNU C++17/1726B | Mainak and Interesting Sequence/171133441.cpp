#include <bits/stdc++.h>
using namespace std;
#define nl <<"\n"
#define fast                \
    ios::sync_with_stdio(); \
    cin.tie(0);
const int MaxN = 1e5 + 7;
 
 
 
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string ans="YES";
        vector<int>v;
        if(n>m)
   ans="NO";
  else if(n!=1)
  {
   if(m%n==0)
   {
    for(int i=0;i<n;i++)
     v.push_back(m/n);
   }else if((n&1)==(m&1) and (n&1)==0)
   {
    for(int i=0;i<n-2;i++)
     v.push_back(1),m-=1;
    v.push_back(m/2);
    v.push_back(m/2);
   }else if((n&1)==1)
   {
    for(int i=1;i<n;i++)
     v.push_back(1),m--;
    v.push_back(m);
   }else
    ans="NO";
    
  }else
   v.push_back(m);
  cout<<ans nl;
  if(ans=="YES")
  {
   for(int x:v)
    cout<<x<<" ";
   cout nl;
  }
      }
}
 
int main()
{
    fast;
    solve();
}