#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll a[n];
    int c=1;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=n-1;i>0;i--)
    {
        if(a[i]>a[i-1])c++;
        else
        {
            v.push_back(c);
           // cout<<c<<endl;
            c=1;
        }
    }
    v.push_back(c);
   sort(v.rbegin(),v.rend());
   cout<<v[0]<<endl;
}