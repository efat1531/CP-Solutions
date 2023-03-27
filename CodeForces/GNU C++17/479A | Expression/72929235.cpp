#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1&&b==1&&c==1)cout<<"3";
    else if(a==1||b==1||c==1)
    {
        int sum=(a+b)*c;
        int sum1=(b+c)*a;
        int sum3=(a+b+c);
        cout<<max(sum,max(sum3,sum1))<<endl;
    }else cout<<a*b*c<<endl;
 
}