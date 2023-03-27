#include<bits/stdc++.h>
#include<string>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    ll k,w,n;
    cin>>k>>n>>w;
    ll tk=0,i=1;
    while(w>0)
    {
        tk+=(i*k);
        i++;
        w--;
    }
   if((tk-n)<=0)
   {
       cout<<"0";
   }else
   {
       cout<<tk-n;
   }
}