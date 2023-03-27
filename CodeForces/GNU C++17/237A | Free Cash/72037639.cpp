#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a,b,c,d,j=0;
  int e[100000]={0};
  int count=1;
  cin>>c>>d;
  int g,h;
  g=c,h=d;
  for(int i=1;i<n;i++)
  {
 
      cin>>a>>b;
      if(a==g&&b==h)
      {
          count++;
          //cout<<count<<" "<<i<<endl;
      }else
      {
          e[j]=count;
          count=1;
          j++;
      }
      g=a;
      h=b;
  }
  e[j]=count;
  sort(e,e+100000);
  cout<<e[99999];
 
}