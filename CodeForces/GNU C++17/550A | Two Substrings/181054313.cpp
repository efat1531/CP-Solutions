#include <bits/stdc++.h>
using namespace std;
 
#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
 
void solve()
{
    string s;
    cin>>s;
    vector<pair<int,int> >AB,BA;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='B' and s[i+1]=='A')
        BA.push_back(make_pair(i,i+1));
        else if(s[i]=='A' and s[i+1]=='B')
        AB.push_back(make_pair(i,i+1));
    }
    map<int,int>mp;
    sort(AB.begin(),AB.end());
    sort(BA.begin(),BA.end());
    for(int i=0;i<AB.size();i++)
    {
        for(int j=BA.size()-1;j>=0;j--)
        {
            mp[AB[i].first]++;
            mp[AB[i].second]++;
            mp[BA[j].first]++;
            mp[BA[j].second]++;
            if(mp.size()==4)
            {
                cout<<"YES"<<endl;
                return;
            }
            mp.clear();
        }
    }
    cout<<"NO"<<endl;
}
 
int main()
{
    // Faster Input Output
    FAST
    int q=1; //cin>>q;
    while(q--)
    {
        solve();
    }
}