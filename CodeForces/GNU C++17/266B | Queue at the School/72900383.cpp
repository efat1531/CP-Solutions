#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   int n,t;
   string a;
   cin>>n>>t>>a;
   while(t--)
   {
       for(int i=0;i<n;)
       {
           if(a[i]=='B'&&a[i+1]=='G')
           {
               a[i]='G';
               a[i+1]='B';
               i+=2;
           }else i+=1;
       }
   }
   cout<<a;
}