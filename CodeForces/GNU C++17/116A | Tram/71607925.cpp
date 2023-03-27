#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++)
    {
        int c,d;
        cin>>c>>d;
        sum+=d;
        sum-=c;
        b[i]=sum;
    }
    int m=b[0];
    for(int i=0;i<a;i++)
    {
        if(b[i]>m)
        {
            m=b[i];
        }
    }
    cout<<m;
 
 
 
}