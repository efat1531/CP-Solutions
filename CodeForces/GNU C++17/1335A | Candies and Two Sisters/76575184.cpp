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
        int n;
        cin>>n;
        if(n%2==0)cout<<(n/2)-1<<endl;
        else cout<<n/2<<endl;
    }
}