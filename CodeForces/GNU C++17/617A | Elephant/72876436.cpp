#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    int step,step2;
    if(n%5==0)step2=n/5;
    else if(n%4==0)step2=n/4;
    else if(n%3==0)step2=n/3;
    else if(n%2==0)step2=n/2;
    step=n/5;
    step+=(n%5)/4;
    step+=((n%5)%4)/3;
    step+=(((n%5)%4)%3)/2;
    step+=(((n%5)%4)%3)%2;
    cout<<min(step,step2);
 
}