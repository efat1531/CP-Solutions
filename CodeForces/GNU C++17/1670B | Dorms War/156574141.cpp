#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MaxN=1e5+7;
#define nl <<"\n"
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sp;
        cin>>sp;
        map<char,int>mp;
        while(sp--)
        {
            char c;
            cin>>c;
            mp[c]++;
        }
        int ans=0;
        int cnt=0;
        int tp=0;
        for(int i=0;i<n;i++)
        {
            cnt++;
            if(mp[s[i]]>0)
            {
                ans=max(ans,cnt);
                if(ans==cnt)
                    tp++;
 
                cnt=0;
            }
        }
        if(tp>1)
            cout<<ans nl;
        else if(ans!=0)
            cout<<ans-1 nl;
        else
            cout<<ans nl;
    }
}