#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b)==(c+d))cout<<"YES";
    else if((a+c)==(b+d))cout<<"YES";
    else if((a+d)==(b+c))cout<<"YES";
    else if((a+b+c)==d)cout<<"YES";
    else if((a+b+d)==c)cout<<"YES";
    else if((a+c+d)==b)cout<<"YES";
    else if((b+c+d)==a)cout<<"YES";
    else cout<<"NO";
}