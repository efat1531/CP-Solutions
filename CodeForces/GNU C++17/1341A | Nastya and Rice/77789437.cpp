#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool g=0;
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        if(((a+b)*n)>=(c-d)&&((a-b)*n)<=c+d)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}