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
   int c=0;
   while(n--)
   {
       int a,b;
       cin>>a>>b;
       if(a+2<=b)c++;
   }
   cout<<c<<endl;
}