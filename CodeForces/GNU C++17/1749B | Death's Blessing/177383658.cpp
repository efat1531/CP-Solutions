#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long br[n],sum=0;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            sum+=a;
        }
        for(int i=0;i<n;i++)
            cin>>br[i],sum+=br[i];
        sort(br,br+n);
        sum-=br[n-1];
        cout<<sum<<endl;
 
    }
}