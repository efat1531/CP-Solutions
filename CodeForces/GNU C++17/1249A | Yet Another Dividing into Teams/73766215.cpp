#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++)
        {
            if(v[i-1]-v[i]==1)c++;
        }
        if(c==0)cout<<1<<endl;
        else cout<<2<<endl;
        v.clear();
    }
}