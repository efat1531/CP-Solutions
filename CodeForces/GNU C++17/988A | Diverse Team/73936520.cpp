#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   int n ,k;
   cin>>n>>k;
   vector<int>v;
   vector<int>v1;
   vector<int>v3;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       v.push_back(a);
       v1.push_back(a);
   }
   sort(v1.begin(),v1.end());
   for(int i=0;i<v1.size();i++)
   {
       if(v1[i]!=v1[i-1])v3.push_back(v1[i]);
   }
   if(v3.size()>=k)
   {
       cout<<"YES"<<endl;
       for(int i=0;i<k;i++)
       {
           for(int j=0;j<v.size();j++)
           {
               if(v[j]==v3[i])
               {
                   cout<<j+1<<" ";
                   break;
               }
           }
       }
   }else cout<<"NO";
}