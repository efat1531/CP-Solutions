#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
   ll t;
  cin>>t;
  while(t--)
  {
      ll n,x,a,b,g,e,q,r;
      cin>>n>>x>>a>>b;
      if((a-b)<(n-1))
      {
       g=abs(a-b);
      e=g+x;
      q=n-1;
       r=min(q,e);
      cout<<r<<endl;
      }
      else
      {
          cout<<abs(a-b)<<endl;
      }
    }
 
 
}