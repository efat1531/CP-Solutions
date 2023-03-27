#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(j==i)cout<<b<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}