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
        int n,k;
        cin>>n>>k;
        int ar[n];
        int br[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            br[i]=ar[i];
        }
        map<int,int>mp;
        sort(br,br+n);
        for(int i=0;i<k;i++)
            mp[br[i]]++;
        int ans=0;
        for(int i=0;i<k;i++)
        {
            if(mp[ar[i]]==0)
            ans++;
        }
        cout<<ans nl;
    }
}
 
 
int main()
{   
    fast;
    solve();
}