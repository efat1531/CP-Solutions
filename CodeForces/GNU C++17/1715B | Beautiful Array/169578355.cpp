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
        ll n, k, b, s;
        cin>>n>>k>>b>>s;
        ll mp1[n];
        memset(mp1, 0, sizeof(mp1));
        mp1[n-1]=s;
        ll p=2;
        bool imp=false;
        while (s/k!=b) {
            if (p>n) {
                imp=true;
                break;
            }
            mp1[n-1]-=(k-1);
            mp1[n-p]=k-1;
            s=mp1[n-1];
            p++;
        }
        if (imp == true) {
            cout<<-1 nl;
        } else {
            for (int i = 0; i<n; i++) {
                cout<<mp1[i]<<" ";
            }
            cout nl;
        }
    }
    return 0;
}
 