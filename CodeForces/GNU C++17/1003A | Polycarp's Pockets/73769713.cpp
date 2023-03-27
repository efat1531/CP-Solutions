#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,p=1,l=1;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++)
    {
        if(v[i-1]==v[i])l++;
        else
        {
            if(p<=l)p=l;
            l=1;
        }
    }
    if(l>p)p=l;
    cout<<p<<endl;
}