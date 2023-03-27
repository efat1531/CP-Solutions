#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int L[]={0,0,0,0,0,0,0,0,0,0};
   int l=0,r=9;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='L')
       {
           for(int j=0;j<10;j++)
           {
               if(L[j]==0)
               {
                   L[j]=1;
                   break;
               }
           }
       }
       else if(s[i]=='R')
       {
           for(int j=9;j>=0;j--)
           {
               if(L[j]==0)
               {
                   L[j]=1;
                   break;
               }
           }
       }
       else
       {
           int x=s[i]-'0';
           L[x]=0;
       }
   }
   for(int i=0;i<10;i++)cout<<L[i];
   cout<<endl;
   //for(int i=0;i<10;i++)cout<<R[i]<<" ";
}