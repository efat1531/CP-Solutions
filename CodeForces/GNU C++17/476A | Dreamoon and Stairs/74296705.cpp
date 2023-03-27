#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll temp=(n+1)/2;
    bool g=0;
    while(temp<=n)
    {
        if(temp%m==0)
        {
            g=1;
            break;
        }else temp++;
    }
    if(g==1)cout<<temp;
    else cout<<-1;
}