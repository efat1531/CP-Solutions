#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MaxN=1e5+7;
#define nl <<"\n"
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        int cn=0,cp=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>0)
                cp++;
            else
                cn++;
        }
                bool f=false;
        for(int i=1;i<cn;i++)
        {
            if(abs(ar[i])>abs(ar[i-1]))
            {
                f=true;
                break;
            }
        }
        for(int i=(n-cp)+1;i<n;i++)
        {
            if(abs(ar[i])<abs(ar[i-1]))
            {
                f=true;
                break;
            }
        }
        if(f==true)
            cout<<"NO" nl;
        else
            cout<<"YES" nl;
    }
}