/*  Code By Efat Sikder   */
/*         IUBAT          */
#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            n+=(2*k);
        }else
        {
            for(int i=3;i<=n;i+=2)
            {
                if(n%2==0)
                {
                    n+=(2*k);
                    break;
                }else if(n%i==0)
                {
                    n+=i;
                    k--;
                }
            }
        }
        cout<<n<<endl;
    }
}