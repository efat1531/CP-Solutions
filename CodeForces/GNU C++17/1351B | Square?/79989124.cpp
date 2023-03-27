/*  Code By Efat Sikder   */
/*         IUBAT          */
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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>a)
        {
            int temp=a;
            a=b;
            b=temp;
        }
            if(a==c)
            {
                if(b+d==a)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }else if(a==d)
            {
                if(b+c==a)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }else if(b==c)
            {
                if(a+d==b)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }else if(b==d)
            {
                if(a+c==b)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }else cout<<"NO"<<endl;
    }
}