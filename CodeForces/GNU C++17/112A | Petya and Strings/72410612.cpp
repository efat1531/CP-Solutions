#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    string a,b;
    int suma=0,sumb=0;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]+=32;
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]>='A'&&b[i]<='Z')
        {
            b[i]+=32;
        }
    }
   if(a==b)
   {
       cout<<"0";
   }else if(a<b)
   {
       cout<<"-1";
   }else cout<<"1";
}