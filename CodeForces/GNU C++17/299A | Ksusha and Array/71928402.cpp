#include <bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    ll a;
    cin>>a;
    ll b[a];
    bool g=0,k=0;
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    if(a>1)
    {
    for(int i=1;i<a;i++)
    {
        if(b[i]%b[0]==0)
        {
            g=1;
        }else
        {
            k=1;
        }
    }
    if(g==1&&k==0)
    {
        cout<<b[0];
    }else
    {
        cout<<"-1";
    }
    }else
    {
        cout<<b[0];
    }
}