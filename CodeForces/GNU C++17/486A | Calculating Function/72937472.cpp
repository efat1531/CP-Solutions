#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n%2==0)cout<<(n/2);
    else cout<<(-1*(n+1)/2);
}