#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   ll a,b,c=0;
   cin>>a>>b;
   while(b>0)
   {
       if(b>=a)
       {
           c+=b/a;
           b=b%a;
           a--;
          // cout<<c<<a<<b<<endl;
       }else a--;
   }
   cout<<c<<endl;
}