#include<bits/stdc++.h>
using namespace std;
#define nl <<"\n"
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<n nl;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
            cout<<i<<" ";
        }
        cout nl;
        for(int i=1;i<n;i++)
        {
            swap(v[0],v[i]);
            for(auto x:v)
            {
                cout<<x<<" ";
            }
            cout nl;
        }
    }
}