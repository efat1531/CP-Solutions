#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
  int n,k=0,count=1;
  cin>>n;
  int a[n],b[1000]={0};
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(a[i]==a[j]&&a[i]!=0)
          {
              a[j]=0;
              count++;
          }
      }
      if(a[i]!=0)
      {
        b[k]=count;
      k++;
      count=1;
      }
  }
  count=0;
  for(int i=0;i<1000;i++)
  {
      if(b[i]!=0)
      {
          //cout<<b[i]<<" ";
          count++;
      }
  }
  sort(b,b+1000);
  cout<<b[999]<<" "<<count;
}