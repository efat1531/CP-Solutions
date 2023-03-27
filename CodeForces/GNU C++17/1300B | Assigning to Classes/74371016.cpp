#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
#define du double
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        //cout<<endl;
        v.clear();
        cout<<v[n]-v[n-1]<<endl;
    }
}