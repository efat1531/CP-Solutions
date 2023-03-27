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
   int sum=0,caseu=0,casea=0;
   bool g=0;
   while(n--)
   {
       int a;
       cin>>a;
       if(a<0&&g==0)
       {
           caseu--;
       }else if(a>0)
       {
           g=1;
           sum+=a;
       }else if(a<0&&g==1)
       {
           casea--;
       }
       if(sum>=(-1)*casea)
       {
           sum+=casea;
           casea=0;
       }else
       {
           caseu--;
           g=0;
           casea=0;
       }
       //cout<<caseu<<" "<<sum<<" "<<casea<<endl;
 
   }
   cout<<(-1)*caseu<<endl;
}