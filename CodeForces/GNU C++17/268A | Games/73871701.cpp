#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
    }
    int c=0;
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            if(v1[i]==v2[j])c++;
        }
    }
    cout<<c<<endl;
}