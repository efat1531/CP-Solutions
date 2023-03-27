#include<bits/stdc++.h>
#define ll long long int
#define st string
#define vt vector
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vt<int>v;
        vt<int>v1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            v1.push_back(a);
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}