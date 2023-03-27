#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,s1=0,s2=0,s3=0;
    cin>>n;
    for(int i=0,j=1;i<n;i++)
    {
        int a;
        cin>>a;
        if(j==1)s1+=a,j++;
        else if(j==2)s2+=a,j++;
        else if(j==3)s3+=a,j=1;
    }
    if(s1>s2)
    {
        if(s1>s3)cout<<"chest";
        else cout<<"back";
    }else if(s2>s3)cout<<"biceps";
    else cout<<"back";
}