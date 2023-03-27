#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
  int n,sum=0;
  cin>>n;
  int a,b;
  int d[n];
  for(int i=1;i<n;i++)
  {
      cin>>d[i];
     //cout<<d[i]<<endl;
  }
  cin>>a>>b;
  for(int i=a;i<b;i++)
  {
      sum+=d[i];
  }
  cout<<sum;
 
}