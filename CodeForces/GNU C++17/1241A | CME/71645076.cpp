#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        if(n%2==0&n/2>1)
        {
            cout<<"0"<<endl;
        }else if(n<3)
        {
            cout<<4-n<<endl;
        }else
        {
            cout<<"1"<<endl;
        }
    }
}