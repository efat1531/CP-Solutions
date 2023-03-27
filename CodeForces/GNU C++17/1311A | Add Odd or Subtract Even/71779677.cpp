#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a<b)
        {
            int t=b-a;
            if(t%2!=0)
            {
                cout<<"1"<<endl;
            }else
            {
                cout<<"2"<<endl;
            }
        }else if(a>b)
        {
            int t=a-b;
            if(t%2==0)
            {
                cout<<"1"<<endl;
            }else
            {
                cout<<"2"<<endl;
            }
        }else
        {
            cout<<"0"<<endl;
        }
 
    }
}