#include<bits/stdc++.h>
#define ll  long long int
#include<cmath>
#define ull unsigned long long int
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,m,t=0,c=0;
       cin>>n>>m;
       if(n%2!=0&&m%2!=0)
       {
           if(n!=1||m!=1)
           {
               int a=max(n,m);
               int b=min(n,m);
               b-=1;
               t=a*(b/2);
               t+=(a+1)/2;
           }else
           {
               int a=max(n,m);
               t=(a+1)/2;
           }
 
       }else
       {
           if(n%2==0)c=n;
           else c=m;
           if(n==c)
           {
               t+=(n/2)*m;
           }else t+=(m/2)*n;
 
       }
       cout<<t<<endl;
   }
}