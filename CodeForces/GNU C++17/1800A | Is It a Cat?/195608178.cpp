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
 string s;
 cin>>s;
 bool ans=true;
 char cuR='M';
 char cur='m';
 for(int i=0;i<s.size();i++)
 {
     if(s[i]==cur or s[i]==cuR)
  continue;
     if(s[0]!='M' and s[0]!='m')
     {
  ans=false;
  break;
     }
     if(cuR=='M' and s[i]=='E')
     {
  cuR='E';
  cur='e';
     }else if(cur=='m' and s[i]=='e')
     {
  cuR='E';
  cur='e';
     }else if(cur=='e' and s[i]=='o')
     {
  cuR='O';
  cur='o';
     }else if(cuR=='E' and s[i]=='O')
     {
  cuR='O';
  cur='o';
     }else if(cuR=='O' and s[i]=='W')
     {
  cuR='W';
  cur='w';
     }else if(cur=='o' and s[i]=='w')
     {
  cuR='W';
  cur='w';
     }else
     {
  ans=false;
  break;
     }
     
 }
 if(ans==false or cuR!='W')
     cout<<"No\n";
 else
     cout<<"Yes\n";
    }
}