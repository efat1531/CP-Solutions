#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define ll long long int
#define ull unsigned long long int
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==y&&y==z)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }else
        {
            int a=max(x,max(y,z));
            if(a==x&&a==y)
            {
                cout<<"YES"<<endl;
                cout<<a<<" "<<z<<" "<<z<<endl;
            }else if(a==x&&a==z)
            {
                cout<<"YES"<<endl;
                cout<<a<<" "<<y<<" "<<y<<endl;
            }else if(a==y&&a==z)
            {
                cout<<"YES"<<endl;
                cout<<a<<" "<<x<<" "<<x<<endl;
            }else cout<<"NO"<<endl;
        }
    }
}