#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   int s,v1,v2,t1,t2;
   cin>>s>>v1>>v2>>t1>>t2;
   if(((s*v1)+2*t1)<((s*v2)+2*t2))cout<<"First";
   else if(((s*v1)+2*t1)>((s*v2)+2*t2))cout<<"Second";
   else cout<<"Friendship";
}