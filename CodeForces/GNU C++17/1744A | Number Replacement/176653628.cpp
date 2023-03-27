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
       char pos[60];
       for(int i=0;i<60;i++)
        pos[i]='0';
       string ans="YES";
       for(int i=0;i<n;i++)
       {
           if(pos[ar[i]]=='0')
            pos[ar[i]]=s[i];
           else if(pos[ar[i]]==s[i])
            continue;
           else
           {
               ans="NO";
               break;
           }
       }
       cout<<ans <<endl;
    }
}