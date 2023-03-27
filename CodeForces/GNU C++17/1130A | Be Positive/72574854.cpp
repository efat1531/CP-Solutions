#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n,count=0,a,count2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>0)
        {
            count++;
        }
        if(a<0)
        {
            count2++;
        }
    }
    if(count>=((n+1)/2))
    {
        cout<<count;
    }else if(count2>=(n+1)/2)cout<<"-1";
    else
    {
        cout<<"0";
    }
}