#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,x,count=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        if(x%i==0&&x/i<=n)
        {
            count++;
        }
    }
 
 
    cout<<count;
 
}