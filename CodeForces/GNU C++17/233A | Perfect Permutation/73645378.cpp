#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        for(int i=n;i>0;i--)cout<<i<<" ";
    }else cout<<-1;
}