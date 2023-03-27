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
        int n;
        cin>>n;
        int ar[n+1];
        int me=INT_MAX;
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
  {
   cin>>ar[i];
   me=min(me,ar[i]);
   mx=max(mx,ar[i]);
  }
  int ans=0;
  
  // 2  1 3  8 5
  if(me==ar[0] or mx==ar[n-1])
   ans=mx-me;
  else
  {
   ar[n]=ar[0];
   for(int i=0;i<n;i++)
    ans=max(ans,ar[i]-ar[i+1]);
   ans=max(ans,mx-ar[0]);
   ans=max(ans,ar[n-1]-me);
  }
  cout<<ans nl;
  
    }
}
 
int main()
{
    fast;
    solve();
}