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
       ll c,n;
       cin>>c>>n;
       if(c%n==0)cout<<c<<endl;
       else
       {
           ll d=c/n;
           d=d*n;
           c=c%n;
         if(c>=n/2)d+=n/2;
         else d+=c;
         cout<<d<<endl;
       }
   }
}