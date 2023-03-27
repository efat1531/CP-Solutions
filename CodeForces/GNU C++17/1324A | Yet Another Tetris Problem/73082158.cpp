#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
      for(int i=0;i<n;i++)
       {
           int a;
           cin>>a;
           if(a%2!=0)c++;
       }
       if(c<n&&c!=0)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
 
 
 
 
    }
}