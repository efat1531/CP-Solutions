#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int x,y,a,b;
       cin>>x>>y>>a>>b;
       x=abs(0-x);
       y=abs(0-y);
       ull mi=min(x,y);
       ull m=max(x,y);
       ull c=(mi)*b;
       c+=(m-mi)*a;
       ull d=(mi+m)*a;
       //cout<<"Min "<<mi<<" Max "<<m<<" a+b "<<c<<" D "<<d<<endl;
       if(c>d)cout<<d<<endl;
       else cout<<c<<endl;
 
    }
}