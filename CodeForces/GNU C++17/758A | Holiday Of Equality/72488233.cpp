#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        sum+=(a[n-1]-a[i]);
    }
    cout<<sum;
}