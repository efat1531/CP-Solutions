#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int t,sum=0;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        if(a[0]=='T')
        {
            sum+=4;
        }else if(a[0]=='C')
        {
            sum+=6;
        }else if(a[0]=='O')
        {
            sum+=8;
        }else if(a[0]=='D')
        {
            sum+=12;
        }else if(a[0]=='I')
        {
            sum+=20;
        }
 
    }
    cout<<sum;
}