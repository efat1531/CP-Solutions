#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0;i<a.size()-1;i+=2)
    {
        if(a[i]!='a'&&a[i+1]=='b')count++,a[i]='a';
        if(a[i]!='b'&&a[i+1]=='a')count++,a[i]='b';
    }
    cout<<count<<endl;
    cout<<a<<endl;
 
}