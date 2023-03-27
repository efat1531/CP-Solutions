#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    ++n;
    bool g=0;
    while(g==0)
    {
        int a,b,c,d;
        d=n%10;
        c=(n/10)%10;
        b=(n/100)%10;
        a=(n/1000)%10;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d;
        if(a==b||a==c||a==d||b==c||b==d||c==d)g=0,n++;
        else g=1,cout<<n;
    }
 
}