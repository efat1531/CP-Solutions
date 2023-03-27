#include<bits/stdc++.h>
using namespace std;
 
long long power(int a,int b)
{
    long long ans=1;
    for(int i=0;i<b;i++)
    {
        ans*=a;
    }
    return ans;
}
 
int main()
{
   int n,m;
   cin>>n>>m;
   int ar[n][m];
   long long ans=0;
   for(int i=0;i<n;i++)
   {
       int r0=0,r1=0;
       for(int j=0;j<m;j++)
       {
           cin>>ar[i][j];
           if(ar[i][j]&1)
            r1++;
           else
            r0++;
       }
       ans+=power(2,r0)-1+power(2,r1)-1;
   }
   for(int i=0;i<m;i++)
   {
       int c0=0,c1=0;
       for(int j=0;j<n;j++)
       {
           if(ar[j][i]&1)
            c1++;
           else
            c0++;
       }
       //cout<<"C0-> "<<c0<<" C1 -> "<<c1<<endl;
       ans+=power(2,c0)-1+power(2,c1)-1;
       //cout<<ans<<endl;
   }
   ans-=(m*n);
   cout<<ans<<endl;
}