#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n;
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
    cin>>n;
    for(int i=0;i<3;i++)
    {
        int a,b;
        cin>>a>>b;
        if(n==a)n=b;
        else if(n==b)n=a;
    }
    cout<<n;
}