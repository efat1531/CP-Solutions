#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]<=k)
        {
            count++;
        }else
        {
            break;
        }
    }
    if(count==n)
    {
        cout<<count;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=k)
        {
            count++;
        }else
        {
            break;
        }
    }
    cout<<count;
}