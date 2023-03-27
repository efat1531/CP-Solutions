#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    int n,l,r,k=0;
    cin>>n>>l>>r;
    ll sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        l--;
        if(l<=0)sum1+=1;
        else sum1+=pow(2,l);
    }
    for(int i=0;i<n;i++)
    {
       if(k>=r-1)
       {
          sum2+=pow(2,r-1);
       }else
       {
           sum2+=pow(2,k);
       }
       k++;
    }
    cout<<sum1<<" "<<sum2<<endl;
 
}