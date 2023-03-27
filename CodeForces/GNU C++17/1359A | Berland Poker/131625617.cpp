#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " <<x<<endl;
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
  test(t)
  {
      int n,m,k;
      cin>>n>>m>>k;
      int a=n/k;
      if(a>=m)cout<<m<<endl;
      else
      {
          m-=a;
          if(m%(k-1)==0)cout<<a-(m/(k-1))<<endl;
          else cout<<a-(m/(k-1))-1<<endl;
      }
  }
}