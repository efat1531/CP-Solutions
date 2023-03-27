#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   int y,b,r;
   cin>>y>>b>>r;
   bool g=0;
   if(y+1<=b&&y+2<=r)cout<<y+y+1+y+2;
   else if(y>=b&&b+1<=r)cout<<b-1+b+b+1;
   else if(y+2>=r&&b+1>=r)cout<<r-2+r-1+r;
}