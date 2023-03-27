#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
  int x,y,z,a,b,c;
  cin>>x>>y>>z>>a>>b>>c;
  if(x>a)cout<<"NO";
    else
   {
      a-=x;
      b+=a;
      if(y>b)cout<<"No";
      else
      {
          b-=y;
          c+=b;
          if(c>=z)cout<<"YES";
          else cout<<"NO";
      }
  }
}