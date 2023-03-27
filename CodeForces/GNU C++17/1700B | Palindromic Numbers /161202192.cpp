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
 
bool palindrome(int n)
{
    string s="";
    while(n>0)
    {
        int a=n%10;
        s+='0'+a;
        n/=10;
    }
    for(int i=0,j=s.size()-1;i<=j;i++,j--)
        if(s[i]!=s[j])
            return false;
 
    return true;
}
 
void solve()
{
    // My code My Rules
    testcase(tt, t)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1="";
        if(s[0]!='9')
        {
            for(int i=0;i<n;i++)
            {
                s1+='0'+('9'-s[i]);
            }
            cout<<s1 nl;
        }else
        {
            int hand=0;
            for(int i=n-1;i>=0;i--)
            {
                if(s[i]=='9' && hand==1)
                    hand=1,s[i]='0';
                else
                    s[i]+=hand,hand=0;
                if(s[i]>'1')
                {
                    s1+='0'+(11-(s[i]-'0'));
                    hand=1;
                }else
                {
                    s1+='0'+('1'-s[i]);
                }
            }
            for(int i=s1.size()-1;i>=0;i--)
                cout<<s1[i];
            cout nl;
            s1.clear();
            s.clear();
        }
    }
}
 
int32_t main()
{
    //fast_io;
    solve();
    return 0;
}
 