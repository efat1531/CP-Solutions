#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    int f[a],s[b];
    bool g=0;
    for(int i=0;i<a;i++)
    {
        cin>>f[i];
    }
    for(int i=0;i<b;i++)
    {
        cin>>s[i];
    }
    sort(f,f+a);
    sort(s,s+b);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(f[i]==s[j])
            {
                g=1;
                c=i;
                break;
            }
        }
        if(g==1)
        {
            break;
        }
    }
    if(g==1)
    {
        cout<<f[c];
    }else if(s[0]>f[0])
    {
        cout<<f[0]<<s[0];
    }else cout<<s[0]<<f[0];
}