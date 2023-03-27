#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
  int n,c=0;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      v.push_back(a);
  }
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i+=2)
  {
      c+=v[i+1]-v[i];
  }
  cout<<c;
}