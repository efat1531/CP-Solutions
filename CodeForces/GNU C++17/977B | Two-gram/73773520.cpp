#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n,c=0,k=0;
    char x,y;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j]&&s[i+1]==s[j+1])
            {
                c++;
            }
        }
        if(c>=k)
        {
            x=s[i];
            y=s[i+1];
            k=c;
            //cout<<k<<" "<<x<<y<<endl;
        }
        c=0;
    }
    if(k>0)
    {
        cout<<x<<y<<endl;
    }else cout<<s[n-2]<<s[n-1];
}