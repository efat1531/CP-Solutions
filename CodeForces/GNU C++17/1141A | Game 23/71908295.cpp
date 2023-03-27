#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,count=0;
    cin>>n>>m;
    bool k=0,q=0;
    if(n==m)
    {
        cout<<"0";
    }else
    {
        while(n<m)
        {
            q=0;
          if(m%(n*3)==0)
          {
              count++;
              n=n*3;
              q=1;
          }else if(m%(n*2)==0)
          {
               count++;
               n=n*2;
               q=1;
          }else
          {
              break;
          }
        }
        if(q==1)
        {
            cout<<count;
        }else
        {
            cout<<"-1";
        }
    }
}