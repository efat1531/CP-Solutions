#include<bits/stdc++.h>
using namespace std;
vector<int>v;
long long n,c,d;
 
bool is_possible(long long k)
{
    long long sum=0;
    for(int i=0,j=0; i<d; i++,j++)
    {
        if(j>k)
            j=0;
        //cout<<j<<" "<<v[j]<<" "<<sum<<endl;
        if(j<n)
        {
            sum+=v[j];
        }
        if(sum>=c)
            return true;
    }
    //cout<<"Not"<<endl;
    return false;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>n>>c>>d;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
       sort(v.rbegin(),v.rend());
       // for(auto x:v)
       //       cout<<x<<" ";
       // cout <<endl;
        long long sum=0;
        bool inf=false;
        for(int i=0; i<min(d,n); i++)
        {
            sum+=v[i];
            if(sum>=c)
            {
                cout<<"Infinity"<<endl;
                inf=true;
                break;
            }
        }
        if(inf==true)
            continue;
        long long l=0,r=d;
        long long mid=(l+r)/2;
        long long k=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(is_possible(mid))
            {
                k=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
            //cout<<mid<<endl;
        }
       if(r==-1)
        cout<<"Impossible"<<endl;
       else
        cout<<k<<endl;
    }
}