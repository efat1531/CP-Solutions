 
#include <bits/stdc++.h>
#include <queue>
using namespace std;
 
int digit(int n)
{
 int a=0;
 while(n>0)
 {
  a++;
  n/=10;
 }
 return a;
}
 
int main() {
 int t;
 cin>>t;
 while(t--)
 {
  int n;
  cin>>n;
  int ar[n],br[n];
  priority_queue<int>pq,pq2;
  for(int i=0;i<n;i++)
   cin>>ar[i],pq.push(ar[i]);
  for(int i=0;i<n;i++)
   cin>>br[i],pq2.push(br[i]);
  int ans=0;
  while(!pq.empty() and !pq2.empty())
  {
   int a=pq.top();
    pq.pop();
   int b=pq2.top();
    pq2.pop();
   if(a>b)
    pq.push(digit(a)),pq2.push(b),ans++;
   else if(b>a)
    pq2.push(digit(b)),pq.push(a),ans++;
  }
  cout<<ans<<endl;
 }
 
}