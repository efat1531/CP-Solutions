#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,t;
 cin>>n>>t;
 int ar[n];
 for(int i=0;i<n;i++)
  cin>>ar[i];
 int j=0,i=0;
 int cur=0;
 int sz=0;
 for( i=0;i<n;i++)
 {
  cur+=ar[i];
  while(cur>t)
  {
   cur-=ar[j];
   j++;
  }
  sz=max(i-j+1,sz);
 }
 cout<<sz<<endl;
}