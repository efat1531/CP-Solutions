#include<bits/stdc++.h>
#include<cmath>
#include<string>
#include <algorithm>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a[3];
        ll n;
        cin>>a[0]>>a[1]>>a[2]>>n;
        sort(a,a+3);
        ll sum=((a[2]-a[1])+(a[2]-a[0]));
        if(sum<=n)
        {
            n-=sum;
            if(n%3==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;
    }
}