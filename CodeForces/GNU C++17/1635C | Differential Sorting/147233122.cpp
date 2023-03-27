#include<bits/stdc++.h>
#define int long long int
#define testcase(t) int t;cin>>t;while(t--)
#define nl <<"\n"
using namespace std;
 
bool isSorted(vector<int>v,int n)
{
    for(int i=1; i<n; i++)
    {
        if(v[i]<v[i-1])
            return false;
    }
    return true;
}
signed main()
{
    testcase(t)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        if(isSorted(v,n))
            cout<<0 nl;
        else if(v[n-1]<v[n-2] or v[n-1]<0)
            cout<<-1 nl;
        else
        {
            cout<<n-2 nl;
            for(int i=0; i<n-2; i++)
                cout<<i+1<<" "<<n-1<<" "<<n nl;
        }
 
    }
}