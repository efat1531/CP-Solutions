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
    int n;
    cin>>n;
    vector< pair<int, int> >v;
    for(int i=0; i<n; i++)
    {
        read(a);
        read(b);
        v.push_back(make_pair(a,b));
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int a=0,b=0,c=0,d=0;
        int x=v[i].ff,y=v[i].ss;
        for(int j=0;j<n;j++)
        {
            int xx=v[j].ff,yy=v[j].ss;
            if(x==xx and y>yy)a++;
            if(x==xx and y<yy)b++;
            if(y==yy and x>xx)c++;
            if(y==yy and x<xx)d++;
            if(a>=1 and b>=1 and c>=1 and d>=1)
            {
                //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                cnt++;
                break;
            }
        }
    }
 
    cout<<cnt<<endl;
}