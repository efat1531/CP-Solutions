#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " <<x<<endl;
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    test(t)
    {
  int n;
  cin>>n;
  string s;
  cin >> s;
  int c0=0;
  vector<int>v;
  for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                c0++;
        }
        for(int i=0;i<n;i++)
        {
            if(i<c0 and s[i]=='1')
                v.push_back(i+1);
            else if(i>=c0 and s[i]=='0')
                v.push_back(i+1);
        }
        if(v.size()==0)
            cout<<0<<endl;
        else {cout<<1<<"\n"<<v.size()<<" ";
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;}
    }
}