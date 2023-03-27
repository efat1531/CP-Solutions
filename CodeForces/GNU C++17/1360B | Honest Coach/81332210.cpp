/*  Code By Efat Sikder   */
/*         IUBAT          */
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
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        vector<int>v1;
        for(int i=0;i<v.size()-1;i++)
        {
            int a=abs(v[i]-v[i+1]);
            v1.push_back(a);
        }
        sort(v1.begin(),v1.end());
        cout<<v1[0]<<endl;
        v.clear();
        v1.clear();
 
    }
}