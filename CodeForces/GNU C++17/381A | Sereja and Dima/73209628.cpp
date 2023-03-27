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
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   int x=0,z=n-1,sum1=0,sum2=0;
   bool g=0;
   while(x<=z)
   {
       if(a[x]>a[z])
       {
           if(g==0)sum1+=a[x],x++,g=1;
           else sum2+=a[x],x++,g=0;
       }else if(a[z]>a[x])
       {
           if(g==0)sum1+=a[z],z--,g=1;
           else sum2+=a[z],z--,g=0;
       }else if(a[x]==a[z])
       {
           if(g==0)sum1+=a[z],z--,g=1;
           else sum2+=a[z],z--,g=0;
       }
   }
   cout<<sum1<<" "<<sum2;
}