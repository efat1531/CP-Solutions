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
  int n,k;
  cin>>n>>k;
  string ans="NO";
  int rem=n-(k-1);
  int rem2=n-2*(k-1);
  bool f=false;
  if(rem&1 and rem>0)
   ans="YES",f=true;
  else if((rem2&1)==0 and rem2>0)
   ans="YES";
  cout<<ans nl;
  if(ans=="YES")
  {
   if(f==true)
   {
    for(int i=0;i<k-1;i++)
     cout<<1<<" ";
    cout<<rem nl;
   }else
   {
    for(int i=0;i<k-1;i++)
     cout<<2<<" ";
    cout<<rem2 nl;
   }
  }
 }
}
 
int main()
{
    fast;
    solve();
}