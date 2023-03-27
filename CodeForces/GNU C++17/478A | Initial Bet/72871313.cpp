#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if((a+b+c+d+e)%5==0&&(a+b+c+d+e)!=0) cout<<(a+b+c+d+e)/5;
    else cout<<"-1";
}