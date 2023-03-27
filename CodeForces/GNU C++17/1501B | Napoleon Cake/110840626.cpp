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
       vector<int>a;
       for(int i=0;i<n;i++)
       {
           int b;
           cin>>b;
           a.push_back(b);
       }
       int e=0;
       if(a[a.size()-1]>1)
       {
           int temp=a[a.size()-1];
           a[a.size()-1]=1;
           e=temp-1;
       }
       for(int i=a.size()-2;i>=0;i--)
       {
           if(a[i]==0&&e>=1)
           {
              a[i]=1;
              e-=1;
           }else if(a[i]>=1&&e>=1)
           {
               e=max(e,a[i]);
               e-=1;
               a[i]=1;
           }else if(a[i]>1&&e==0)
           {
               int temp=a[i];
               a[i]=1;
               e=temp-1;
           }
       }
       for(int i=0;i<n;i++)
       {
           cout<<a[i]<<" ";
       }
    }
}