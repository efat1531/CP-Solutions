#include<bits/stdc++.h>
using namespace std;
const long long int MOD=1e9+7;
 
long long power(int base,int pow)
{
    if(pow==0)
        return 1;
    long long r=power(base,pow/2);
    r=(r*r)%MOD;
    if(pow&1)
        r=(r*base)%MOD;
    return r;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<power(n,k)<<endl;
    }
}