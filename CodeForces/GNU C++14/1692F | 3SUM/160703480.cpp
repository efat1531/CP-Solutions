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
    testcase(tt, t)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            int b=a%10;
            mp[b]++;
        }
        bool f=false;
        for(int i=0;i<=9;i++)
        {
            if(mp[i]>0)
            {
                mp[i]--;
                for(int j=0;j<=9;j++)
                {
                    if(mp[j]>0)
                    {
                        mp[j]--;
                        for(int k=0;k<=9;k++)
                        {
                            if(mp[k]>0)
                            {
                                int sum=i+j+k;
                                if(sum%10==3)
                                {
                                    cout<<"YES" nl;
                                    f=true;
                                    break;
                                }
                            }
                        }
                        mp[j]++;
                        if(f==true)
                            break;
                    }
                }
                mp[i]++;
                if(f==true)
                    break;
            }
        }
        if(!f)
        cout<<"NO" nl;
    }
}
 
int32_t main()
{
    fast_io;
    solve();
    return 0;
}