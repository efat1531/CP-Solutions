#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   int n,k=0,l=0,c=0;
   cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       v.push_back(a);
   }
       for(int i=0;i<v.size();i++)
       {
           if(v[i]==0)
           {
               k=i;
               break;
           }
           else c++;
       }
       for(int i=v.size()-1;i>=0;i--)
       {
           if(v[i]==0)
           {
               l=i;
               break;
           }
           else c++;
       }
       int d=c;
       c=0;
       for(int i=k;i<l;i++)
       {
           if(v[i]==1)c++;
           else
           {
               if(d<c)d=c;
               c=0;
           }
       }
       cout<<max(d,c);
}