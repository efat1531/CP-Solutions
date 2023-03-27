/*  Code By Efat Sikder   */
/*         IUBAT          */
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
       int n,m;
       cin>>n>>m;
       int mn=m*n;
       int w=0,bl=0;
       if(mn%2!=0)
       {
           w=mn/2;
       }else
       {
           w=(mn/2)-1;
       }
       bool g=0;
       for(int i=0;i<n;i++)
       {
           if(g==0)
           {
               bool b=0;
               for(int j=0;j<m;j++)
               {
                   if(b==0)cout<<'B',b=1;
                   else
                   {
                       if(w!=0)cout<<'W',w--;
                       else cout<<'B';
                       b=0;
                   }
               }
               g=1;
           }else
           {
               bool b=0;
               for(int j=0;j<m;j++)
               {
                   if(b==0)
                   {
                       if(w!=0)cout<<'W',w--;
                       else cout<<'B';
                       b=1;
                   }
                   else cout<<'B',b=0;
               }
               g=0;
           }
           cout<<endl;
       }
 
   }
}