#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    int b=0,pos=0;
    string s;
    cin>>s;
    bool c=0,d=0,e=0,f=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='h')
        {
           c=1;
           pos=i;
           break;
        }
    }
    for(int i=pos;i<s.size();i++)
    {
        if(s[i]=='e')
        {
           d=1;
           pos=i;
           break;
        }
    }
    for(int i=pos;i<s.size();i++)
    {
        if(s[i]=='l')
        {
           b+=1;
        }
        if(b==2)
        {
            pos=i;
            break;
        }
    }
    for(int i=pos;i<s.size();i++)
    {
        if(s[i]=='o')
        {
           e=1;
           pos=i;
           break;
        }
    }
    if(b==2&&c==1&&d==1&&e==1)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
}