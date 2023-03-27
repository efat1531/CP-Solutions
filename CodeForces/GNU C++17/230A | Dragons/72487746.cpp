#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
   ll s,n;
   cin>>s>>n;
   ll dh[n],b[n];
   ll h=s;
   bool g=0;
   for(ll i=0;i<n;i++)
   {
       cin>>dh[i]>>b[i];
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(dh[i]<dh[j])
           {
               int temp=dh[i];
               dh[i]=dh[j];
               dh[j]=temp;
               temp=b[i];
               b[i]=b[j];
               b[j]=temp;
           }
       }
   }
   for(int i=0;i<n;i++)
   {
       if(h>dh[i])
       {
           h+=b[i];
       }else g=1;
   }
   if(g==1)cout<<"NO";
   else cout<<"YES";
 
}