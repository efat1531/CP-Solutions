#include<bits/stdc++.h>
using namespace std;
#define nl <<"\n"
#define fast ios::sync_with_stdio();cin.tie(0);
const int MaxN=1e5+7;
 
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        if(n&1) 
        {
            cout<<1<<" ";
            for(int i=3;i<=n;i+=2)
                cout<<i<<" "<<i-1<<" ";
            cout nl;
        }else
        {
            for(int i=2;i<=n;i+=2)
                cout<<i<<" "<<i-1<<" ";
            cout nl;
        }
    }
}
 
 
int main()
{   
    fast;
    solve();
}