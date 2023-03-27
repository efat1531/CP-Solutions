#include<bits/stdc++.h>
#define ll  long long int
#include<cmath>
#define ull unsigned long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,r=0,w=n;
    while(n>1)
    {
        sum+=n+((w-1)*r);
        r++,n--,w--;
    }
    cout<<sum+1;
}