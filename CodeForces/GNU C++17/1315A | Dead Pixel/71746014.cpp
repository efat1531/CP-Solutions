#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int a,b,x,y;
         cin>>a>>b>>x>>y;
         int c[4];
         c[0]=((a-1)-x)*b;
         c[1]=(x)*b;
         c[2]=((b-1)-y)*a;
         c[3]=(y)*a;
         sort(c,c+4);
         /*for(int i=0;i<4;i++)
         {
             cout<<c[i]<<endl;
         }*/
         cout<<c[3]<<endl;
 
 
    }
}