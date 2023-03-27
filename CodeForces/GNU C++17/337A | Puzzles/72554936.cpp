#include<bits/stdc++.h>
#include<cmath>
#include<string>
#include <algorithm>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[t];
    for(int i=0;i<t;i++)cin>>a[i];
    sort(a,a+t);
    int c=(t-n)+1;
    int b[c];
    for(int i=0;i<c;i++)
    {
        b[i]=a[i+(n-1)]-a[i];
       // cout<<i<<" "<<b[i]<<endl;
    }
    sort(b,b+c);
    cout<<b[0]<<endl;
 
 
}