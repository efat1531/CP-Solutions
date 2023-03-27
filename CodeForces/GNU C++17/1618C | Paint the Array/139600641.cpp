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
        read(n);
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        bool f=false;
        int gcd=ar[0];
        for(int i=2;i<n;i+=2)
        {
            gcd=__gcd(gcd,ar[i]);
        }
        int gcd1=ar[1];
        int f1=false;
        for(int i=3;i<n;i+=2)
        {
            gcd1=__gcd(gcd1,ar[i]);
        }
        for(int i=1;i<n;i+=2)
        {
            if(ar[i]%gcd==0)f=true;
        }
        for(int i=0;i<n;i+=2)
        {
            if(ar[i]%gcd1==0)f1=true;
        }
        if(f==true and f1==true)cout<<0 nl;
        else if(f1==false)cout<<gcd1 nl;
        else if(f==false)cout<< gcd nl;
        
        
    }
}