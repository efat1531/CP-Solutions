#include<bits/stdc++.h>
#define db(x) cout<< #x << "  "<<x<<endl
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool f=false;
        int c0=0,c1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')c0++;
            else c1++;
        }
        int n=min(c1,c0);
        if(n%2!=0)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
 
    }
}