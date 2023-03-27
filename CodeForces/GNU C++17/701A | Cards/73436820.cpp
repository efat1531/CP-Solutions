#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int lin(int a[], int sv, int n)
{
    for(int i=0;i<n;i++)
    {
        if(sv==a[i])
        {
            a[i]=0;
            return i+1;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i],b[i]=a[i];
    sort(b,b+n);
    for(int i=0;i<n/2;i++)
    {
        cout<<lin( a, b[i],n)<<" "<<lin(a,b[n-1-i],n)<<endl;
    }
 
}