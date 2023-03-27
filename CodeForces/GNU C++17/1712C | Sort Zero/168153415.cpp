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
        int ar[n];
        map<int,int>mp;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        bool f=is_sorted(ar,ar+n);
        if(f==true)
            cout<<0 nl;
        else
        {
            int ue[n];
            for(int i=0;i<n;i++)
            {
                mp[ar[i]]++;
                ue[i]=mp.size();
            }
            int p=0;
            map<int,int>smp;
            smp[ar[n-1]]=n-1;
            for(int i=n-2;i>=0;i--)
            {
                if(ar[i]>ar[i+1])
                {
                    p=i;
                    break;
                }else
                    smp[ar[i]]=max(i,smp[ar[i]]);
            }
            int ans=ue[p];
            for(int i=0;i<=p;i++)
            {
                if(smp[ar[i]]!=0)
                    ans=max(ue[smp[ar[i]]],ans);
 
            }
            cout<<ans nl;
        }
    }
}
 
 
int main()
{   
    fast;
    solve();
}