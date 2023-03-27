#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    string a;
    cin>>a;
    char b[200];
    int c=a.size();
    int j=0;
    for(int i=0;i<c;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]='a'+(a[i]-'A');
           // cout<<a[i]<<" ";
        }
    }
    //cout<<c;
    for(int i=0;i<c;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
        {
            continue;
        }else
        {
            b[j]='.';
            b[j+1]=a[i];
            j+=2;
        }
    }
   // int d=b.size();
    for(int i=0;i<j;i++)
    {
        cout<<b[i];
    }
 
}