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
        string s1,s2;
        cin>>s1>>s2;
        int a=0;
        bool f=false;
        for(int i=0;i<n-1;i++)
        {
            if(s1[i+1]=='1'&&s2[i+1]=='1')
            {
                f=true;
                break;
            }
        }
        if(f==false)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}