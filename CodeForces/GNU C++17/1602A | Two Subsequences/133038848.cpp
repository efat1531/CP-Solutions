#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
        int a;
    string s;
    cin>>s;
    char c;
    c=s[0];
    for(int i=0;i<s.size();i++)
    {
        if(c>=s[i])a=i,c=s[i];
    }
    cout<<c<<" ";
    for(int i=0;i<s.size();i++)
    {
        if(i==a)
            continue;
        else cout<<s[i];
    }
    cout<<endl;
  }
}