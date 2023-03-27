#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
int main()
{
  int n,c;
  cin>>n>>c;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      v.push_back(a);
  }
  vector<int>profit;
  bool g=0;
  for(int i=0;i<v.size();i++)
  {
      if(v[i]>v[i+1]&&i!=v.size()-1)
      {
          int temp=v[i];
          temp-=(c+v[i+1]);
          profit.push_back(temp);
          //cout<<i<<" "<<temp<<endl;
          temp=0;
          g=1;
      }
  }
  if(g==0||*max_element(profit.begin(),profit.end())<0)cout<<0;
  else cout<<*max_element(profit.begin(),profit.end());
}