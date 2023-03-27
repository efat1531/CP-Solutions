#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int prime(int a, int b)
{
    bool c=0;
    int j;
    for(int i=a+1;i<=b;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
           if(i%j==0)
           {
               c=1;
               break;
           }
        }
        if(c==0 && i<b)return 0;
    }
    if(c==0)return 1;
    else return 0;
}
int main()
{
   int a,b;
   cin>>a>>b;
   int c=prime(a,b);
   if(c==1)cout<<"YES";
   else cout<<"NO";
}