#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    char c;
    for(int i=0;i<n*m;i++)
    {
        cin>>c;
        if(c=='C'||c=='M'||c=='Y')count++;
    }
    if(count>0)
    {
        cout<<"#Color";
    }else cout<<"#Black&White";
}