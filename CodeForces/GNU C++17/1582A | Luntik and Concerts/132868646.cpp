#include<bits/stdc++.h>
#define db(x) cout<< #x <<" = "<<endl
#define test(t) int t;cin>>t;while(t--)
#define read(x) int x;cin>>x
#define sz(x) x.size()
#define sortof(x) sort(x.begin(),x.end())
#define fr(a,b) for(int i=a;i<b;i++)
#define ll long long
using namespace std;
int main()
{
    test(t)
    {
        int a,b,c;
    cin>>a>>b>>c;
    if(a==b and b==c)cout<<0<<endl;
    else
    {
        a*=1;
        b*=2;
        c*=3;
        int d=max(a,max(b,c));
        int e=(a+b+c)-d;
        if(d%2==0 and e%2==0)cout<<0<<endl;
        else if(d%2!=0 and e%2!=0)cout<<0<<endl;
        else cout<<1<<endl;
    }
    }
}