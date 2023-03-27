#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#define ll long long int
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    int temp=(n-1)*10;
    if(sum+temp<=d)
    {
        d=d-sum;
        cout<<d/5<<endl;
    }else cout<<-1<<endl;
 
}