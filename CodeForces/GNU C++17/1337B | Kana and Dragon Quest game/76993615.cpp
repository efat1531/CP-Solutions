#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,m;
        cin>>x>>m>>n;
        if(x<=10&&n>=1)cout<<"YES"<<endl;
        else{
        for(int i=0;i<m;i++)
        {
            x=x/2;
            x+=10;
           // cout<<x<<endl;
            if(x<=10)break;
        }
        if(x<=0)cout<<"YES"<<endl;
        else
        {
            x-=n*10;
            //cout<<x<<" y"<<endl;
            if(x<=0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        }
    }
}