#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int m=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        a+=m;
        m=max(m,a);
        v.push_back(a);
    }
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
 
}