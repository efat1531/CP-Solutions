#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c5=0,c0=0,t5=0;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        if(a==5)t5+=5;
        else c0++;
 
        if(t5%9==0 and t5>0)c5+=9,t5=0;
    }
    if(c0 == 0)cout<<"-1"<<endl;
    else  if(c0>0 and c5==0)cout <<0;
    else
    {
            for(int i=0;i<c5;i++)cout<<5;
          for(int i=0;i<c0;i++)cout<<0;
 
    }
}