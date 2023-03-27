#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int a,n,count=0,b1,b2,b3,a2,a3;
    cin>>a>>a2>>a3;
    cin>>b1>>b2>>b3;
    a=a+a2+a3;
    if(a%5==0)count+=a/5;
    else count+=(a/5)+1;
    b1=b1+b2+b3;
    if(b1%10==0)count+=(b1/10);
    else count+=(b1/10)+1;
    cin>>n;
    if(count>n)cout<<"NO";
    else cout<<"YES";
 
}