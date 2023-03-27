#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,c=0,k=0;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B')c++;
        else
        {
            if(c!=0){
            v.push_back(c);
            c=0;}
        }
    }
    if(c>0)v.push_back(c);
 
 
         cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=0)cout<<v[i]<<" ";
        }
}