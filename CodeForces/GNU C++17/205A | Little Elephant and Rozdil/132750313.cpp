#include<bits/stdc++.h>
#define db(x) cout<< #x <<" = "<< x<<endl
#define test(t) int t;cin>>t;while(t--)
#define read(x) int x; cin>>x
#define sz(s) s.size()
#define sortof(x) sort( s.begin(),s.end())
#define ff first
#define ss second
using  namespace std;
int main()
{
    read(n);
    int a=0,posa=1;
    cin>>a;
    bool f=false;
    for(int i=1;i<n;i++)
    {
        read(c);
        if(c<a)
        {
            a=c;
            posa=i+1;
            f=false;
        }else if(c==a)f=true;
    }
    if(f==false)cout<<posa<<endl;
    else cout<<"Still Rozdil"<<endl;
}