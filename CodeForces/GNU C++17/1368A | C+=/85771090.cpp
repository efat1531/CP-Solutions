#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,j=0,k=0;
        cin>>a>>b>>n;
        while(k<=n)
        {
            k=a+b;
            if(a<=b)
            {
                int temp=a;
                a=b;
                b=temp;
            }
            b+=a;
           // cout<<"A- "<<a<<"      B- "<<b<<endl;
            j++;
        }
        cout<<j<<endl;
    }
}