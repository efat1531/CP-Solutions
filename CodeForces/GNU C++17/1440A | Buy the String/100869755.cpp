#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c0,c1,h,p;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        int t0=0,t1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')t1++;
            else t0++;
        }
        if(c0+h<c1)
        {
            p=(n*c0)+(t1*h);
        }else if(c1+h<c0)
        {
            p=(n*c1)+(t0*h);
        }else
        {
           p=(t0*c0)+(t1*c1);
        }
        cout<<p<<endl;
    }
}