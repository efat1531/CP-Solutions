/*  Code By Efat Sikder   */
/*         IUBAT          */
#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int d=min(a,b);
        d=d*2;
        int e=max(a,b);
        if(d>=e)cout<<d*d<<endl;
        else cout<<e*e<<endl;
    }
}