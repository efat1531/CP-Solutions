#include<bits/stdc++.h>
using namespace std;
#define nl <<"\n"
#define db(x) cout<< #x <<" -> "<<x nl;
const double PI= 2*acos(0.0);
 
int main()
{
    int tc;
    cin>>tc;
    for(int t=0;t<tc;t++)
    {
       map<char,int>mp;
       string s;
       int n;
       cin>>n;
       for(int i=0;i<=2*n;i++)
       {
           cin>>s;
           for(int j=0;j<s.size();j++)
            mp[s[j]]++;
       }
       for(auto x:mp)
       {
           if(x.second&1)
           {
               cout<<x.first<<endl;
               break;
           }
       }
    }
}
 