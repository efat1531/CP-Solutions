#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   ll n;
   cin>>n;
   int g=0;
   while(n>0)
   {
       int t=n%10;
       if(t==4||t==7)g++;
       n=n/10;
   }
   if(g==4||g==7)cout<<"YES";
   else cout<<"NO";
}