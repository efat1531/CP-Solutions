#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
  ll n;
  cin>>n;
  ll temp=n;
  vector<int>v;
  while(n>0)
  {
      int a=n%10;
      n=n/10;
      if(a>=5)a=9-a;
      v.push_back(a);
  }
  bool g=0;
  if(v[v.size()-1]==0)g=1;
  for(int i=v.size()-1;i>-1;i--)
  {
      if(g==1&&v[i]==0)g=0,cout<<9;
      else g=0,cout<<v[i];
  }
}