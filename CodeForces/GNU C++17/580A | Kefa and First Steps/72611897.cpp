#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    ll n,j=0,count=1;
    cin>>n;
    ll a[100000]={0};
    ll b[n];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=1;i<n;i++)
    {
        if(b[i]>=b[i-1])count++;
        else
        {
            a[j]=count;
            count=1;
            j++;
        }
    }
    a[j]=count;
    ll m=a[0];
    //cout<<endl;
    for(int i=0;i<100000;i++)
    {
        if(m<a[i])m=a[i];
        //if(a[i]!=0)cout<<a[i]<<" ";
    }
    cout<<m<<endl;
}