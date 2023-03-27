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
        bool b=1;
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++)
        {
            if((v[i]-v[i-1])>1)b=0;
        }
        if(b==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
}