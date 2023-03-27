#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl <<"\n"
#define db(x,i)  cout<< #x <<" = " <<x <<" and "<<#i <<" = "<<i nl;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        int pos=-1,diff=INT_MAX;
        sort(v.begin(),v.end());
        if(n==2)
        {
            cout<<v[0]<<" "<<v[1] nl;
        }
        else
        {
            for(int i=1; i<n; i++)
            {
                if(diff>abs(v[i]-v[i-1]))
                {
                    diff=abs(v[i]-v[i-1]);
                    pos=i;
                }
            }
            for(int i=pos;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            for(int i=0;i<pos;i++)
            {
                cout<<v[i]<<" ";
            }
            cout nl;
        }
 
    }
}