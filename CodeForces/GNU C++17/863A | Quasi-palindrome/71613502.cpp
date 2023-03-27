#include<bits/stdc++.h>
using namespace std;
int main()
{
    char b[1000];
    cin>>b;
    int c=b[0];
   // cout<<c<<endl;
    if(c>=97&&c<=122)
    {
       int d=65+(c-97);
       //cout<<d<<endl;
       b[0]=d;
      // cout<<b[0]<<endl;
    }
    int s=strlen(b);
    for(int i=0;i<s;i++)
    {
        cout<<b[i];
    }
}