#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;
#define ll long long int
#define ull unsigned long long int
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[i]==v[j]&&v[i]!=0)v[j]=0;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=0)cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}