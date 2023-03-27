#include<bits/stdc++.h>
#define db(x) cout<< #x <<" = "<< x<<endl
#define test(t) int t;cin>>t;while(t--)
#define read(x) int x; cin>>x
#define sz(s) s.size()
#define sortof(x) sort( s.begin(),s.end())
using  namespace std;
int main()
{
    read(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        read(a);
        sum+=a;
    }
    int c=0;
    for(int i=1;i<=5;i++)
    {
        if((sum+i)%(n+1) != 1)c++;
    }
    cout<<c<<endl;
}