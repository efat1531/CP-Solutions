#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string stu;
       int n,count=0,ii,j=0;
       int a[200]={0};
       cin>>n;
       cin>>stu;
       for(int i=0;i<n;i++)
       {
           if(stu[i]=='A'&&stu[i+1]=='P')
           {
               ii=i;
               //cout<<ii<<endl;
               break;
           }else
           {
               ii=n;
           }
       }
       for(int i=ii;i<n;i++)
       {
           //cout<<i<<" "<<ii<<endl;
           if(stu[i]=='A')
           {
               a[j]=count;
               j++;
               count=0;
           }else
           {
               count++;
           }
       }
       a[j]=count;
       sort(a,a+100);
       cout<<a[99]<<endl;
   }
}