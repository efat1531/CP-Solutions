#include<bits/stdc++.h>
#define db(x) cout<< #x << " = " <<x<<endl;
#define test(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    test(t)
    {
        int a,b,c,m;
        cin>>a>>b>>c;
        m=max(a,(max(b,c)));
        if(a==b&&b==c)
        {
            cout<<"1 1 1"<<endl;
        }else if(a==b&&m==a)
        {
            cout<<"1 1 "<<(m+1)-c<<endl;
        }else if(a==c&&m==a)
        {
            cout<<"1 "<<(m+1)-b<<" 1"<<endl;
        }else if(c==b&&m==b)
        {
            cout<<(m+1)-a<<" 1 1"<<endl;
        }else
        {
            if(m==a)
            {
                a=0;
                b=(m+1)-b;
                c=(m+1)-c;
            }else if(m==b)
            {
                b=0;
                a=(m+1)-a;
                c=(m+1)-c;
            }else if(m==c)
            {
                c=0;
                b=(m+1)-b;
                a=(m+1)-a;
            }
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
}