#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   ll a,b,c,count=0;
   cin>>a>>b>>c;
   count+=c*2;
   if(b>a&&a!=0&&b!=0)
   {
       count+=(a*2)+1;
   }else if(a>b&&a!=0&&b!=0)
   {
       count+=(b*2)+1;
   }else if(a==b&&a!=0)
   {
       count+=a+b;
   }
   cout<<count;
}