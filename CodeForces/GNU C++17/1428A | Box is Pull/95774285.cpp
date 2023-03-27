#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2;
        int m=0;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2&&y1==y2)
        {
            cout<<0<<endl;
        }else if(x1==x2)
        {
            if(y2>y1)cout<<y2-y1<<endl;
            else cout<<y1-y2<<endl;
        }else if(y1==y2)
        {
            if(x2>x1)cout<<x2-x1<<endl;
            else cout<<x1-x2<<endl;
        }else
        {
            if(x1>x2)
            {
                m=x1-x2;
            }else m=x2-x1;
 
            if(y1>y2)m+=y1-y2;
            else m+=y2-y1;
            cout<<m+2<<endl;
        }
    }
}