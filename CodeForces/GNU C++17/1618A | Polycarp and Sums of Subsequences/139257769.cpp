#include<bits/stdc++.h>
#define int long long int
#define test(t) int t;cin>>t;while(t--)
#define nl <<"\n" 
#define db(x) cout<< #x << " "<< x nl
using namespace std;
int32_t main()
{
    test(t)
    {
        int a[7];
        for(int i=0;i<7;i++)cin>>a[i];
        int sum=a[0]+a[1];
        cout<<a[0]<<" "<<a[1]<<" ";
        if(sum==a[2])cout<<a[3] nl;
        else cout<<a[2] nl;
        
    }
}