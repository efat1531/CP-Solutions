#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n,m,g=0;
    cin>>n>>m;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>m)
        {
            if(a[i]%m==0)a[i]=(a[i]/m);
            else a[i]=(a[i]/m)+1;
            //cout<<a[i]<<" ";
        }else a[i]=0,g++;
        b[i]=a[i];
       //cout<<i<<" "<<a[i]<<" "<<b[i]<<endl;
    }
    sort(b,b+n);
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==b[n-1])
        {
            cout<<i+1<<endl;
            break;
        }
    }
}