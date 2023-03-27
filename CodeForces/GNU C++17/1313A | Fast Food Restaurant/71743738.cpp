#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        int count=0;
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        //cout<<a[0]<<a[1]<<a[2];
        if(a[0]>0)
        {
            a[0]-=1;
            count++;
        }
        if(a[1]>0)
        {
            a[1]-=1;
            count++;
        }
        if(a[2]>0)
        {
            a[2]-=1;
            count++;
        }
        if(a[2]>0&&a[1]>0)
        {
            a[2]-=1;
            a[1]-=1;
            count++;
        }
        if(a[2]>0&&a[0]>0)
        {
            a[2]-=1;
            a[0]-=1;
            count++;
        }
        if(a[1]>0&&a[0]>0)
        {
            a[1]-=1;
            a[0]-=1;
            count++;
        }
        if(a[1]>0&&a[0]>0&&a[2]>0)
        {
            count++;
        }
        cout<<count<<endl;
    }
}