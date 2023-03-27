#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   ll a,b,c,d,m,v;
   cin>>a>>b>>c>>d;
   m=max(((3*a)/10),(a-((a/250)*c)));
   v=max(((3*b)/10),(b-((b/250)*d)));
   if(m>v)
   {
       cout<<"Misha";
   }else if(v>m)
   {
       cout<<"Vasya";
   }else
   {
       cout<<"Tie";
   }
}