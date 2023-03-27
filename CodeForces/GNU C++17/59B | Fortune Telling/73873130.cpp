#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    vector<int>even;
    vector<int>odd;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a%2==0)even.push_back(a);
        else odd.push_back(a);
    }
    int c=even.size(),d=odd.size();
    if(c!=0)sort(even.rbegin(),even.rend());
    if(d!=0)sort(odd.rbegin(),odd.rend());
    if(d==0)cout<<"0";
    else
    {
        if(d%2==0)
        {
            for(int i=0;i<d-1;i++)sum+=odd[i];
        }else
        {
            for(int i=0;i<d;i++)sum+=odd[i];
        }
        for(int i=0;i<c;i++)sum+=even[i];
        cout<<sum;
    }
}