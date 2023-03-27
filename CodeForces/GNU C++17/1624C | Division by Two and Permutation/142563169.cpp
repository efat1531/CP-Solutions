#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        bool arr[n+1];
        string s="Yes";
        memset(arr,false,sizeof(arr));
        for(int i=0;i<n;i++)
        {
            while(ar[i]>n or arr[ar[i]]==true)
            {
                ar[i]/=2;
            }
            if(ar[i]==0)
            {
                s="NO";
                break;
            }else
            arr[ar[i]]=true;
        }
        cout<<s<<endl;
    }
}