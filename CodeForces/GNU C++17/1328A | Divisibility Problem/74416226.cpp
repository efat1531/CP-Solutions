#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
#define du double
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a>=b&&a%b!=0)
        {
           ll temp=a/b;
           temp+=1;
           temp=temp*b;
           cout<<temp-a<<endl;
        }else if(a%b==0)cout<<0<<endl;
        else cout<<b-a<<endl;
 
    }
}