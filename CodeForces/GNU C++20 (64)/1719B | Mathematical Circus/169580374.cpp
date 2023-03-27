#include<bits/stdc++.h>
#define st string
#define ll long long int
#define vt vector
#define ld double
#define nl <<"\n"
#define testcase(t) int t; cin>>t; while(t--)
using namespace std;
int main()
{
    testcase(t) {
        ll n, k;
        cin>>n>>k;
        bool e = true;
        for (ll i = 1; i<=n; i+=2) {
            if (((i+k)*(i+1))%4!=0 && ((i+k+1)*i)%4!=0) {
                e = false;
                break;
            }
        }
        if (e == false) {
            cout<<"NO" nl;
        } else {
            cout<<"YES" nl;
            for (ll i = 1; i<=n; i+=2) {
                if (((i+k)*(i+1))%4==0) {
                    cout<<i<<" "<<i+1 nl;
                } else {
                    cout<<i+1<<" "<<i nl;
                }
            }
        }
    }
    return 0;
}
 