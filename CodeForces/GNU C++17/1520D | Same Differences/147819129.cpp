#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl <<"\n"
#define db(x,i)  cout<< #x <<" = " <<x <<" and "<<#i <<" = "<<i nl;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            a-=i;
            ans+=mp[a];
            mp[a]++;
 
        }
        cout << ans nl;
 
    }
}