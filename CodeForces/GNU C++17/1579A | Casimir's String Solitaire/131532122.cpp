#include<bits/stdc++.h>
#define db(x) cout<<#x<< " = " <<(x)<<endl
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         string s;
         cin>>s;
         int a=0,b=0,c=0;
         for(int i=0;i<s.size();i++)
         {
             if(s[i]=='A')a++;
             else if(s[i]=='B')b++;
             else c++;
         }
       int m=min(a,b);
       a-=m;
       b-=m;
      // db(m);
       if(b==c&&a==0)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
     }
}