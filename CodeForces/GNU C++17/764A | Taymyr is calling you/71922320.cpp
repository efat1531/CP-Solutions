#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    int n,m,z,count=0,i=1;
    cin>>n>>m>>z;
    int temp=m;
    while(temp<=z)
    {
        temp=m*i;
        if(temp%n==0&&temp<=z)
        {
            count++;
        }
        //cout<<i<<" ";
        i++;
    }
    cout<<count;
}