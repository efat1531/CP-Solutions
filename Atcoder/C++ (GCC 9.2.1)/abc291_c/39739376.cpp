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

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
//RLUD

void solve() {
    map<pair<int,int>,bool>mp;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0;
    string ans="No";
    mp[{0,0}]=true;
    for(int i=0;i<n;i++)
    {
	int mv;
	if(s[i]=='R')
	    mv=0;
	else if(s[i]=='L')
	    mv=1;
	else if(s[i]=='U')
	    mv=2;
	else
	    mv=3;
	x+=dx[mv];
	y+=dy[mv];
	//cout<<s[i]<<" "<<x<<" "<<y nl;
	if(mp[{x,y}])
	{
	    ans="Yes";
	    break;
	}else
	{
	    mp[{x,y}]=true;
	}
    }
    cout<<ans nl;
}

int32_t main() {
  fast_io;
  solve();
  return 0;
}
