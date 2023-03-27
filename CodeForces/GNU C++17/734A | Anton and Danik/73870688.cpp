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
   string s;
   int a=0,d=0;
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='A')a++;
       else d++;
   }
   if(d>a)cout<<"Danik";
    else if(a>d)cout<<"Anton";
   else cout<<"Friendship";
 
}