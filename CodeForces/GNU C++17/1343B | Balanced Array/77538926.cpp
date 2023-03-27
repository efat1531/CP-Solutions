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
        if(n<=2)cout<<"NO"<<endl;
        else
        {
            if(n%4!=0)cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                int a=2;
                for(int i=0;i<n/2;i++)
                {
                    cout<<a<<" ";
                    a+=2;
                }
                a=a-1;
                int b=1;
                for(int i=0;i<n/4;i++)
                {
                    cout<<a<<" "<<b<<" ";
                    a-=2;
                    b+=2;
                }
                cout<<endl;
            }
        }
    }
}