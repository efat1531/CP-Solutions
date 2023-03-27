#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef unsigned long long l1;
typedef double db;
#define pi    2 * acos(0.0)
#define sz(x) (x).size()
#define read(x)                                                                                                        \
    int x;                                                                                                             \
    cin >> x
#define prDouble(x, y) fixed << setprecision(y) << x
#define lcm(a, b)      (a * b) / __gcd(a, b);
#define sortof(x)      sort((x).begin(), (x).end());
#define fast_io                                                                                                        \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL);                                                                                                     \
    cout.tie(NULL)
#define mm(x, v) memset((x), v, sizeof(x));
#define testcase(t, x)                                                                                                 \
    int t;                                                                                                             \
    cin >> t;                                                                                                          \
    for (int x = 1; x <= t; x++)
#define nl << "\n"
 
void solve()
{
    // My code My Rules
    testcase(tt,t1)
    {
        string s;
        string t;
        cin>>s>>t;
        if(t[0]=='a' and t.size()==1)
            cout<<1 nl;
        else
        {
            ll ans=1;
            for(int i=0;i<t.size();i++)
            {
                if(t[i]=='a')
                {
                    ans=-1;
                    break;
                }
            }
            if(ans>0)
                ans=pow(2,s.size());
            cout<<ans nl;
        }
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}