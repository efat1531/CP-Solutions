#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
int main()
{
    int n,x,y,j;
    cin>>n;
    string a;
    cin>>a;
    vector<char>v;
    for(int i=0;i<a.size();i++)
    {
        v.push_back(a[i]);
    }
    if(n%2==0)
    {
        j=0;
        x=(n/2)-1;
        y=n/2;
    }else
    {
        j=1;
        a[(n/2)]=v[0];
        x=(n/2)-1;
        y=(n/2)+1;
    }
    for(int i=j;i<v.size();i+=2)
    {
        a[x]=v[i];
        a[y]=v[i+1];
        x--;
        y++;
    }
    cout<<a<<endl;
}