#include<bits/stdc++.h>
#define int long long int
#define nl <<"\n"
#define db(x) cout<< #x << " " <<x << nl;
#define read(x) int x;cin>>x 
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int32_t main()
{
   test(t)
   {
       read(n);
       int ar[n];
       for(int i=0;i<n;i++)cin>>ar[i];
       int count=1;
       for(int i=0;i<n;i++)
       {
           if(ar[i]==0)
           {
               if(i!=0)
               {
                   if(ar[i-1]==0)
                   {
                       count=-1;
                       break;
                   }
               }
           }else
           {
               if(i!=0)
               {
                   if(ar[i-1]==1)count+=5;
                   else count++;
               }else
               count++;
           }
       }
       cout<<count nl;
   }
}