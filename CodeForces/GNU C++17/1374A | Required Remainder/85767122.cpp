#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        if(n<x)
        {
            cout<<y<<endl;
        }else if(n==x)
        {
            if(y==0)cout<<x<<endl;
            else cout<<y<<endl;
        }else
        {
            int a=n%x;
            if(a==y)cout<<n<<endl;
            else if(a>y)cout<<n-(a-y)<<endl;
            else cout<<(n-a)-(x-y)<<endl;
        }
    }
}