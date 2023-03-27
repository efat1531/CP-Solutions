#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n%2==0)
  {
      cout<<n/2<<endl;
      for(int i=0;i<n/2;i++)cout<<2<<" ";
  }else
  {
      cout<<n/2<<endl;
      n-=3;
      for(int i=0;i<n/2;i++)cout<<2<<" ";
      cout<<3;
  }
}