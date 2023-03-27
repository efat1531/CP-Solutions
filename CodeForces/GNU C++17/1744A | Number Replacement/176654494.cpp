#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int ar[n];
       for(int i=0;i<n;i++)
        cin>>ar[i];
       string s;
       cin>>s;
       string ans="YES";
       map<int,char>mp;
       for(int i=0;i<n;i++)
       {
           if(mp[ar[i]]!=s[i])
           {
               if(mp[ar[i]]>='a' and mp[ar[i]]<='z')
               {
                   ans="NO";
                   break;
               }else
               {
                   mp[ar[i]]=s[i];
               }
           }
       }
       cout<<ans <<endl;
    }
}