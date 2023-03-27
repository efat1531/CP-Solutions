#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,c=0,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)c++;
        v.push_back(a);
    }
    cout<<c<<endl;
    for(int i=0;i<v.size();i++)
    {
        if(v[i+1]==1)cout<<v[i]<<" ";
    }
    cout<<v[v.size()-1]<<endl;
}