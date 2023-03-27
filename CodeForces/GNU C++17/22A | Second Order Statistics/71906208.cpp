#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    int n,b=0,k=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[0]!=a[i])
        {
            k=1;
            cout<<a[i];
            break;
        }else
        {
            b=1;
        }
    }
    if(b==1&&k==0)
    {
        cout<<"NO";
    }
}