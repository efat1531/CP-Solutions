#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   ull n;
   cin>>n;
   if(n==3)cout<<0;
   else if(n%2==0)
   {
       if((n/2)%2==0)cout<<0;
       else cout<<1;
   }else
   {
       n-=3;
       if((n/2)%2==0)cout<<0;
       else cout<<1;
   }
}