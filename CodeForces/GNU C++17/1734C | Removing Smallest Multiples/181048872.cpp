// Problem: C. Removing Smallest Multiples
// Contest: Codeforces Round #822 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1734/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
 
 
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Shahidul Alam || CSE,IUBAT || web.shahidul.alam@gmail.com      ## //
// ##                                                                         ## //
// ##                        CF Handle : shz-code                             ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
#include <bits/stdc++.h>
using namespace std;
 
#define FAST  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
 
void solve()
{
    int n; cin>>n;
    string s="0";
    string s1; cin>>s1;
    s+=s1;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i] == '0' or s[i]=='*')
        {
            int k = i;
            for(int j=k;j<=n;j+=k)
            {
                //cout<<i<<" "<<j<<endl;
                if(s[j] == '0')
                {
                    s[j] = '*';
                 sum += k;
                }
                else if(s[j]=='1')
                    break;
 
            }
        }
    }
    cout<<sum<<endl;
}
 
int main()
{
    // Faster Input Output
    FAST
    int q; cin>>q;
    while(q--)
    {
        solve();
    }
}