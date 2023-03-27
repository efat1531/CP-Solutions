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
        int n;
        cin>>n;
        int a[n];
        bool g=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n>=3)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=i+2;j<n;j++)
                {
                    if(a[i]==a[j])
                    {
                        //cout<<a[j]<<" "<<a[i]<<" ";
                        g=1;
                        break;
                    }
                }
                if(g==1)
                {
                    break;
                }
            }
            if(g==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;
    }
}
 