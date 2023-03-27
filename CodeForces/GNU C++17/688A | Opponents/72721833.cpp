#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> v;
    int count=0;
    while(d--)
    {
        string a;
        bool g=0;
        cin>>a;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='0'){count++,g=1;break;}
        }
        if(g==0)
        {
            v.push_back(count);
            count=0;
        }
    }
    v.push_back(count);
    sort(v.rbegin(),v.rend());
    cout<<v[0]<<endl;
    //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}