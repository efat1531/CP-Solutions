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
    ll n,a,b,k;
    cin>>n>>a>>b>>k;
    ll ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll s=a+b;
        s=ar[i]%s;
        if(s<=a and s!=0)
            continue;
        else if(s==0)
        {
            s=b;
            ll hn=(s+a-1)/a;
            v.push_back(hn);
        }else
        {
            s-=a;
            ll hn=(s+a-1)/a;
            v.push_back(hn);
        }
    }
    sort(v.begin(),v.end());
    ll ans=(n-v.size());
    ll sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        ans++;
        if(sum>k)
        {
            ans--;
            break;
        }
    }
    cout<< ans nl;
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}