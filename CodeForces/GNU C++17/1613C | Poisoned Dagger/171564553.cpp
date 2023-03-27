#include<bits/stdc++.h>
using namespace std;
const long long int MOD=1e9+7;
long long int n,h;
 
vector<long long int>v;
 
bool check(long long dur)
{
    long long int h1=h;
    for(int i=0; i<v.size(); i++)
    {
        //cout<<"H -> "<<h1<<" - DIF -> "<<dur <<endl;
        if(v[i+1]-v[i]<dur and i<v.size()-1)
            h1-=(v[i+1]-v[i]);
        else
            h1-=dur;
    }
    if(h1<=0)
        return true;
    return false;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>h;
        for(int i=0; i<n; i++)
        {
            long long a;
            cin>>a;
            v.push_back(a);
        }
        if(n==1)
        {
            cout<<h<<endl;
        }
        else
        {
            long long int low=0;
            long long int high=h;
            long long int mid;
            long long int ans;
            int a=1000;
            while(a--)
            {
                mid=(low+high)/2;
                //cout<<"L - M - H : "<<low<<" " <<mid<<" "<<high<<endl;
                if(check(mid))
                    high=mid,ans=mid;
                else
                    low=mid;
            }
            cout<<ans <<endl;
        }
        v.clear();
    }
}