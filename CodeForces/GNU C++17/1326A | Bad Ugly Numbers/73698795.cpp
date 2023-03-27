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
       int n,sum=9;
       cin>>n;
       if(n==1)cout<<-1;
       else
       {
           for(int i=0;i<n-1;i++)sum+=5;
           if(sum%9==0)
           {
               for(int i=0;i<n-2;i++)cout<<5;
               cout<<99;
           }else
           {
               for(int i=0;i<n-1;i++)cout<<5;
               cout<<9;
           }
       }
       cout<<endl;
   }
 
}