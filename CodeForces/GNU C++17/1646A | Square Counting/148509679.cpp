#include<bits/stdc++.h>
using namespace std;
#define nl <<"\n"
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,s;
        cin>>n>>s;
        n*=n;
        cout<<s/n nl;
    }
}