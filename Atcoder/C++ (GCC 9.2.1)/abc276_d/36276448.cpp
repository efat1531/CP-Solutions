#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int g=0;
    for(int i=0;i<n;i++)
        g=__gcd(ar[i],g);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ar[i]/=g;
        while(ar[i]%2==0)
            ans++,ar[i]/=2;
        while(ar[i]%3==0)
            ans++,ar[i]/=3;
        if(ar[i]!=1)
        {
            ans=-1;
            break;
        }

    }
    cout<<ans <<endl;
}
