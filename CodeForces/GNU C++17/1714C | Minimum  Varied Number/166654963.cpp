#include<bits/stdc++.h>
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
        for(int i=9;n>0 or i>0;i--)
        {
            if(n>=i)
                n-=i,v.push_back(i);
        }
        for(int i=v.size()-1;i>=0;i--)
            cout<<v[i];
        cout<<endl;
    }
}