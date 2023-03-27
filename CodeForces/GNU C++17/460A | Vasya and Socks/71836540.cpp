#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int j=0,k=0;
    while(n>0)
    {
        n-=1;
        k++;
        j++;
        if(j==m)
        {
            j=0;
            n+=1;
        }
 
 
    }
    cout<<k;
}