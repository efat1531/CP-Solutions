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
       ll n;
       cin>>n;
       ll a[n];
       vector<int>v;
       for(ll i=0;i<n;i++)cin>>a[i];
       sort(a,a+n);
       v.push_back(a[0]);
       for(int i=1;i<n;i++)
       {
           if(a[i]!=a[i-1])v.push_back(a[i]);
       }
       cout<<v.size()<<endl;
 
   }
}