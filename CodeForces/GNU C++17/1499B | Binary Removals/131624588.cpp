#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " <<x<<endl;
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
  test(t)
  {
      string s;
      cin>>s;
      int p0=-1,p1=-1;
      for(int i=0;i<s.size()-1;i++)
      {
          if(s[i]=='1'&&s[i+1]=='1')
          {
              p1=i;
              break;
          }
      }
      for(int i=s.size()-1;i>0;i--)
      {
          if(s[i]=='0'&&s[i-1]=='0')
          {
              p0=i;
              break;
          }
      }
      if(p0>p1&&p1!=-1&&p0!=-1)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
  }
}