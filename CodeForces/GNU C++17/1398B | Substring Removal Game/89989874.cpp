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
        string s;
        cin>>s;
        vector<int>v;
        int c=0,a=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')c++;
            if(s[i]=='0')
            {
                v.push_back(c);
                c=0;
            }
        }
        v.push_back(c);
        sort(v.begin(),v.end());
        if(v.size()!=0)
        {
            for(int i=v.size()-1;i>=0;i-=2)
            {
                a+=v[i];
            }
        }
        cout<<a<<endl;
    }
}