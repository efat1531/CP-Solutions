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
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int a=v[0]+v[1];
        if(a<=v[v.size()-1])
        {
            cout<<1<<" "<<2<<" "<<v.size()<<endl;
        }else cout<<-1<<endl;
    }
}