#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,c25=0,c50=0;
    bool b=0;
    cin>>n;
    while(n--)
    {
       int a;
       cin>>a;
       if(a==25)c25++;
       if(a==50)
       {
           if(c25>0)c25--;
           else b=1;
           c50++;
       }else if(a==100)
       {
           if(c25>0&&c50>0)c25--,c50--;
           else if(c25>2)c25-=3;
           else b=1;
       }
    }
    if(b==1)cout<<"NO";
    else cout<<"YES";
}