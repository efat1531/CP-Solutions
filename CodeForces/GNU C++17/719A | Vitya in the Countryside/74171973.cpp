#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    int n,a,g=0;
    cin>>n>>a;
    if(a==0)g=1;
    else if(a==15)g=-1;
    for(int i=1;i<n;i++)
    {
        int b;
        cin>>b;
        if(a-b==-1&&b!=15)g=+1;
        else if(a-b==1&&b!=0)g=-1;
        else if(b==0)g=1;
        else if(b==15)g=-1;
        else g=0;
       // cout<<g<<" "<<a<<" "<<b<<endl;
        a=b;
    }
    if(g==1)cout<<"UP";
    else if(g==-1)cout<<"DOWN";
    else cout<<-1;
}