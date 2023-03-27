#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef unsigned long long l1;
typedef double db;
#define pi 2 * acos(0.0)
#define sz(x) (x).size()
#define read(x)                                                               \
  int x;                                                                      \
  cin >> x
#define prDouble(x, y) fixed << setprecision(y) << x
#define lcm(a, b) (a * b) / __gcd(a, b);
#define sortof(x) sort((x).begin(), (x).end());
#define fast_io                                                               \
  ios_base::sync_with_stdio(false);                                           \
  cin.tie(NULL);                                                              \
  cout.tie(NULL)
#define mm(x, v) memset((x), v, sizeof(x));
#define testcase(t, x)                                                        \
  int t;                                                                      \
  cin >> t;                                                                   \
  for(int x = 1; x <= t; x++)
#define nl << "\n"
 
 
void solve()
{
    // My code My Rules
    testcase(tt,t)
    {
        int n,m;
        cin>>n>>m;
        int ar[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ar[i][j];
            }
        }
        int mindp[n][m]={0,0};
        int maxdp[n][m]={0,0};
        mindp[0][0]=ar[0][0];
        maxdp[0][0]=ar[0][0];
        for(int i=1;i<n;i++)
        {
            mindp[i][0]=mindp[i-1][0]+ar[i][0];
            maxdp[i][0]=maxdp[i-1][0]+ar[i][0];
        }
        for(int i=1;i<m;i++)
        {
            mindp[0][i]=mindp[0][i-1]+ar[0][i];
            maxdp[0][i]=maxdp[0][i-1]+ar[0][i];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                mindp[i][j]=min(mindp[i-1][j],mindp[i][j-1])+ar[i][j];
                maxdp[i][j]=max(maxdp[i-1][j],maxdp[i][j-1])+ar[i][j];
            }
        }
        if(mindp[n-1][m-1]>0 or maxdp[n-1][m-1]<0 or (n+m)%2==0)
            cout<<"NO" nl;
        else
            cout<<"YES" nl;
    }
}
 
int32_t main()
{
    //fast_io;
    solve();
    return 0;
}