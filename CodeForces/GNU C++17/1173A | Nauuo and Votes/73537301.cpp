#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    int s1,s2;
    s1=n-m+z;
    s2=n-m-z;
    if((s1==s2&&z!=0)||(m==n&&z==0))cout<<"0";
    else if(s1>0&&s2>0)cout<<"+";
    else if(s2<0&&s1<0)cout<<"-";
    else cout<<"?";
}