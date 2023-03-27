#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   int n,c=0;
   cin>>n;
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
       if((s[i]-'0')%2==0)c+=i+1;
   }
   cout<<c<<endl;
}