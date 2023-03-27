#include<bits/stdc++.h>
#include<cmath>
#include<string>
#include <algorithm>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,k,i=1;
    cin>>n>>k;
    int rt=240-k;
    while(rt>=(5*i))
    {
        rt-=(5*i);
        i++;
 
    }
    if(i>n)cout<<n;
    else cout<<i-1;
}