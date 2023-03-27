#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    ll n,m,sum=0,d=0;
    cin>>n>>m;
    sum+=m;
    while(n--)
    {
        ll s;
        char a;
        cin>>a>>s;
        if(a=='+')sum+=s;
        else
        {
            if(sum<s)
            {
                d++;
 
            }else sum-=s;
        }
    }
    cout<<sum<<" "<<d;
}