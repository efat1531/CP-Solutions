#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    string s;
     cin>>s;
     int j=0;
     int b=s.size();
     b=b/2;
     int a[b+1];
     for(int i=0;i<s.size();i++)
     {
         if(s[i]!='+')
         {
             a[j]=(s[i]-'0');
             j++;
         }
     }
     sort(a,a+(b+1));
     cout<<a[0];
     for(int i=1;i<b+1;i++)
     {
         cout<<'+'<<a[i];
     }
 
 
}