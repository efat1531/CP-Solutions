#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
     int n,j=0;
     cin>>n;
     string b;
     int a[n];
     cin>>b;
     bool g=0,k=0;
     for(int i=0;i<n;i++)
     {
         if(b[i]!='0')
         {
             j=i;
             break;
         }
     }
     //int t=(n-j)/2;
     for(int i=0;i<n;i++)
     {
         a[i]=b[i]-'0';
         if(a[i]==4||a[i]==7)
         {
             g=1;
         }else
         {
             k=1;
         }
     }
     //cout<<t<<" "<<j<<endl;
    /*for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }*/
     int sum=0,sum1=0;
     for(int i=0;i<(n/2);i++)
     {
         sum+=b[i];
     }
     for(int i=n-1;i>=(n/2);i--)
     {
         sum1+=b[i];
     }
     if(sum==sum1&&g==1&&k==0)
     {
         cout<<"YES"<<endl;
     }else
     {
         cout<<"NO";
     }
 
 
 
}