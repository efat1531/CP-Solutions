#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long l1;
typedef double db;
#define pi 2 * acos(0.0)
#define sz(x) (x).size()
#define read(x) \
  int x;        \
  cin >> x
#define prDouble(x, y) fixed << setprecision(y) << x
#define lcm(a, b) (a * b) / __gcd(a, b);
#define sortof(x) sort((x).begin(), (x).end());
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define mm(x, v) memset((x), v, sizeof(x));
#define testcase(t, x) \
  int t;               \
  cin >> t;            \
  for (int x = 1; x <= t; x++)
#define nl << "\n"
const ll inf=0x3f3f3f3f3f3f3f3f;

void solve() {
    int n,q;
    cin>>n>>q;
    int ar[n+6];
    memset(ar,0,sizeof ar);
    while(q--)
    {
	int ty,p;
	cin>>ty>>p;
	if(ty==1)
	{
	    ar[p]+=1;
	}else if(ty==2)
	{
	    ar[p]+=2;
	}else
	{
	    if(ar[p]>=2)	
		cout<<"Yes" nl;
	    else 
		cout<<"No" nl;
	}
    }
}

int32_t main() {
  fast_io;
  solve();
  return 0;
}
