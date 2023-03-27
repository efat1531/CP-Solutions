#include<bits/stdc++.h>
#define db(x) cout<< #x << "  "<<x<<endl
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    long long int a=v[0],b=v[v.size()-1];
    long long c1=0,c2=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==a)c1++;
        else if(v[i]==b)c2++;
    }
    if(b-a==0)
    {
        cout<<0<<" "<<n*(n-1)/2;
    }else
        cout<<b-a<<" "<<c1*c2<<endl;
}