#include<bits/stdc++.h>
#define int long long int
#define testcase(t) int t;cin>>t;while(t--)
#define nl <<"\n"
using namespace std;
signed main()
{
    testcase(t)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int ans=0;
        for(int i=1;i<n-1;i++)
        {
            if(v[i]>v[i+1] and v[i]>v[i-1])
            {
                ans++;
                if(i+1<n-1)
                    v[i+1]=max(v[i],v[i+2]);
                else
                    v[i+1]=v[i];
            }
        }
        cout<<ans nl;
        for(auto x :v)
            cout<<x<<" ";
        cout nl;
    }
}