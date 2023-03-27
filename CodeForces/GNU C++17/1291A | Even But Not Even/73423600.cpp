#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,c=0;
       cin>>n;
       string s;
       vector<char>v;
       cin>>s;
       for(int i=0;i<n;i++)
       {
           if((s[i]-'0')%2!=0)v.push_back(s[i]),c++;
       }
       if(v.size()>=2)cout<<v[0]<<v[1]<<endl;
       else cout<<-1<<endl;
       v.clear();
   }
}