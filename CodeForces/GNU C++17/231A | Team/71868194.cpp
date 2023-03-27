#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  //int a[n][2];
  int count=0;
  while(n--)
  {
      int a,b,c;
      cin>>a>>b>>c;
      if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1))
      {
          count++;
      }
  }
  cout<<count;
 
}