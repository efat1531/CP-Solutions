#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,c=0;
    cin>>n;
    int a[n];
    int j=n-1;
    for(int i=0;i<n;i++)cin>>a[i],sum1+=a[i];
    sort(a,a+n);
    while(sum2<=sum1)
    {
        sum2+=a[j];
        sum1-=a[j];
        j--;
        c++;
    }
    cout<<c;
}