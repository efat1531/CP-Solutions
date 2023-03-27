#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int maxN=1e5+5;
    vector<int>v[maxN];
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<v[i].size()<<" ";
        sort(v[i].begin(),v[i].end());
        for(auto x:v[i])
                cout<<x<<" ";
        cout<<endl;
    }
}
