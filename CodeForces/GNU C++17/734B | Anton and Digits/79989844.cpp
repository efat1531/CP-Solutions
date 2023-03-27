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
        int a,b,c,d;
        ll sum=0;
        cin>>a>>b>>c>>d;
        if(a>=1&&c>=1&&d>=1)
        {
            int temp=min(a,min(c,d));
            a=a-temp;
            d=d-temp;
            c=c-temp;
            sum+=temp*256;
        }
        if(a>=1&&b>=1)
        {
            int temp=min(a,b);
            sum+=32*temp;
        }
        cout<<sum<<endl;
}