#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        //Ki korchi amio jani na nij dayitte buijha nen -_-
        if(a[0]==a[1]&&a[1]==a[2])a[0]=a[1];
        else if(a[0]==a[1]&&a[1]!=a[2]&&a[2]!=a[1]+1)a[0]+=1,a[1]+=1,a[2]-=1;
        else if(a[0]!=a[1]&&a[1]==a[2]&&a[2]!=a[0]+1)a[0]+=1,a[1]-=1,a[2]-=1;
        else if(((a[1]-a[0])+(a[2]-a[1]))<=2)a[0]=0,a[1]=0,a[2]=0;
        else a[0]+=1,a[1]-=1,a[2]-=1;
 
 
        cout<<(a[1]-a[0])+(a[2]-a[1])+(a[2]-a[0])<<endl;
    }
}