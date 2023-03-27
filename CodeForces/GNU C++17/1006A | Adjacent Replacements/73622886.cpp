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
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
       ll a;
       cin>>a;
       if(a%2==0)a-=1;
       v.push_back(a);
   }
   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}