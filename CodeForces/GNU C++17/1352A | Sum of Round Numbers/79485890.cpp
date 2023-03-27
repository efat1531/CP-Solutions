#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      int j=1;
      cin>>n;
      int temp=n;
      vector<int>v;
      while(n>0)
      {
          int c=n%10;
          n=n/10;
          c=c*j;
        v.push_back(c);
          j=j*10;
      }
      int c=0;
      for(int i=0;i<v.size();i++)
      {
          if(v[i]!=0)c++;
      }
      cout<<c<<endl;
      if(c>1)
      {
          for(int i=0;i<v.size();i++)
          {
              if(v[i]!=0)cout<<v[i]<<" ";
          }
      }else cout<<temp;
      cout<<endl;
    }
}