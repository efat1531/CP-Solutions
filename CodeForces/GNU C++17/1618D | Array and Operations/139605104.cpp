#include<bits/stdc++.h>
#define int long long int
#define test(t) int t;cin>>t;while(t--)
#define read(n) int n;cin>>n;
#define nl <<"\n"
#define db(x) cout<< #x << " " << x nl;
using namespace std;
int32_t main()
{
    test(t)
    {
        int n,k,sum=0;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        sort(ar,ar+n);
        for(int i=n-1,j=n-k-1;i>=n-k;i--,j--)sum+=ar[j]/ar[i];
        for(int i=0;i<n-(k*2);i++)sum+=ar[i];
        cout << sum nl;
    }
}