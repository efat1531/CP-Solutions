#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++ )cin>>a[i];
    for(int i=0;i<n;i++)
    {
        ll n1,n2,m1,m2;
       if(i>0&&i<n-1)
       {
            n1=a[i+1]-a[i];
            n2=a[i]-a[i-1];
            m1=a[n-1]-a[i];
            m2=a[i]-a[0];
            //cout<<n1<<" "<<n2<<endl;
       }else if(i==0)
       {
 
           n1=a[i+1]-a[i];
           n2=n1+10;
           m1=a[n-1]-a[i];
           m2=m1-10;
           //cout<<n1<<" "<<n2<<endl;
       }else if(i==n-1)
       {
           n2=a[i]-a[i-1];
           n1=n2+10;
           m2=a[i]-a[0];
           m1=m2-10;
           //cout<<n1<<" "<<n2<<endl;
       }
        cout<<min(n1,n2)<<" "<<max(m1,m2)<<endl;
    }
}