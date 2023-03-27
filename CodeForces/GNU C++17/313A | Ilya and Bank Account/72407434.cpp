#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   string s;
   cin>>s;
   int a=s.size();
   if(s[0]!='-')
   {
       cout<<s;
   }else if(a==3&&s[2]=='0')cout<<"0";
   else
   {
       if(s[a-1]>=s[a-2])
       {
           for(int i=0;i<a-1;i++)
           {
               cout<<s[i];
           }
       }else
       {
           for(int i=0;i<a;i++)
           {
               if(i!=a-2)cout<<s[i];
           }
       }
   }
}