#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,k,r,sum=0;
    cin>>n>>k>>r;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(i>=n-k)a=r;
            sum+=a;
    }
    cout<<sum;
}