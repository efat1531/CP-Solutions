#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    ll x;
    cin>>x;
    bool b=0;
    ll a=1;
    ll c=1;
    while(x>1)
    {
        if(x%2!=0)c++,x--;
        else
        {
            x=x/2;
        }
    }
    cout<<c<<endl;
}