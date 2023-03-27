#include<bits/stdc++.h>
#define db(x) cout<< #x <<" = "<< x <<endl
using namespace std;
int fun(int n,int e)
{
    int c=0;
    for(int i=e;i*i<n;i++)
    {
        if(n%i==0)
        {
            c=i;
            break;
        }
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=0,b=0,c=0;
        bool f=false;
        a=fun(n,2);
        //db(a);
        if(a>0)
        {
            n/=a;
            b=fun(n,a+1);
            if(b>0)
            {
                c=n/b;
            }
            if(a==b or b==c or c==a)
            {
                f=true;
            }
        }else
        {
            f=true;
        }
        if(f==false)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
}