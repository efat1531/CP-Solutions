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
const ll mod=32768;
 
ll power(ll a, ll b)
{
    if(b==0)
        return 1;
    ll r=power(a,b/2);
    r=r*r;
    if(b&1)
        r*=a;
    return r;
}
 
void solve()
{
    // My code My Rules
    testcase(tt, t)
    {
        ll n;
        cin>>n;
        ll ans=30;
        for(ll add=0;add<=15;add++)
        {
            for(ll mul=0;mul<=15;mul++)
            {
                ll a=(n+add)*power(2,mul);
                if(a%mod==0)
                    ans=min(ans,add+mul);
            }
        }
        cout<<ans nl;
 
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}