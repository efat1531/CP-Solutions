#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b=-1;
        cin>>n;
       vector<int>v;
       bool f=false;
       for(int i=0;i<n;i++)
       {
           int a;
           cin>>a;
           if(a<=b)
           {
               f=true;
           }else
           {
               b=a;
           }
           v.push_back(a);
       }
       if(f==true or n%2==0)
         {
             cout<<"YES"<<endl;
         }
       else
       cout<<"NO"<<endl;
 
    }
}
 