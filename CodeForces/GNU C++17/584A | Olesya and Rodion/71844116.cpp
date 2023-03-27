#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    if(n>1&&t<10)
    {
        for(int i=0;i<n;i++)
        {
            cout<<t;
        }
    }else if(n>1&&t>=10)
    {
        cout<<"1";
        for(int i=1;i<n;i++)
        {
            cout<<0;
        }
    }else if(n==1&&t<10)
    {
        cout<<t;
    }else
    cout<<"-1";
 
 
 
 
 
}