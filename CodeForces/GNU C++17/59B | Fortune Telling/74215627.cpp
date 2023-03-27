#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    ll a[t],sum=0;
    for(ll i=0;i<t;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    if(t==1)
    {
        if(a[0]%2==1)
        {
            cout<<a[0];
        }
        else
        {
            cout<<0;
        }
    }
    else
    {
        sort(a,a+t);
        if(sum%2==0)
        {
            bool g=0;
            for(int i=0;i<t;i++)
            {
                if(a[i]%2!=0)
                {
                    sum-=a[i];
                    g=1;
                    break;
                }
            }
            if(g==0)cout<<0;
            else cout<<sum;
        }else cout<<sum<<endl;
    }
}