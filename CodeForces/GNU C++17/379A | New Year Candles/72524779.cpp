#include<bits/stdc++.h>
#include<cmath>
#include<string>
#include <algorithm>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    ll n,b;
    cin>>n>>b;
    ll h=n;
    while(n>=b)
    {
        h+=n/b;
        ll temp=n;
        n=temp/b;
        n+=temp%b;
        //cout<<n<<endl;
    }
    cout<<h<<endl;
}