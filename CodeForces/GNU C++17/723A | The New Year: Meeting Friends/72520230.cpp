#include<bits/stdc++.h>
#include<cmath>
#include<string>
#include <algorithm>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
   int d=abs(a[1]-a[0])+abs(a[1]-a[2]);
    cout<<d;
}