#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    ll y,k,n,c=0;
    cin>>y>>k>>n;
    ll a=-1;
    if(y<n)
    {
        a=k-(y%k);
        a=a+y;
    }
        while(a<=n&&a>0)
        {
           cout<<a-y<<" ";
           a+=k;
           c++;
        }
        if(c==0)cout<<-1;
}