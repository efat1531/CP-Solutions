#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
     int n;
    cin>>n;
    string a;
    cin>>a;
    int countX=0,countx=0;
    for(int i=0;i<n;i+=1)
    {
        if(a[i]=='X')
        {
            countX++;
        }else
        {
            countx++;
        }
    }
   // cout<<countx<<" "<<countX;
   int d=(abs(countx-countX)/2);
   cout<<d<<endl;
   if(countx>countX)
   {
      for(int i=0;i<n;i++)
      {
          if(a[i]=='x')
          {
              a[i]='X';
              d-=1;
          }
          if(d==0)
          {
              break;
          }
      }
   }else if(countx<countX)
   {
      for(int i=0;i<n;i++)
      {
          if(a[i]=='X')
          {
              a[i]='x';
              d-=1;
          }
          if(d==0)
          {
              break;
          }
      }
   }
   cout<<a;
}