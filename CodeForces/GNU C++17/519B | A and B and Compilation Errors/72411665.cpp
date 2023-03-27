#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n ;
    bool g=0;
    ll a[n],b[n-1],c[n-2];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)cin>>b[i];
    for(int i=0;i<n-2;i++)cin>>c[i];
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<a[i]<<endl,g=1;
            break;
        }
    }
    if(g==0)
    {
        cout<<a[n-1]<<endl;
    }
    g=0;
    for(int i=0;i<n-2;i++)
    {
        if(b[i]!=c[i])
        {
            cout<<b[i]<<endl,g=1;
            break;
        }
    }
    if(g==0)cout<<b[n-2]<<endl;
 
}