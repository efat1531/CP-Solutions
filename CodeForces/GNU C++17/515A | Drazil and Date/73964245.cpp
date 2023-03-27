#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   ll a,b,c;
   cin>>a>>b>>c;
   c=c-(abs(a)+abs(b));
   if(c%2==0&&c>=0)cout<<"YES";
   else cout<<"NO";
}