#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ull unsigned long long int
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b,e;
    int c=1,d=0;
    cin>>b;
    n--;
    while(n--)
    {
        cin>>a;
        bool g=1;
        if(a.size()==b.size())
        {
            for(int i=0;i<a.size();i++)
            {
                if(a[i]!=b[i]&&g==1)g=0;
            }
            if(g==0)d++,e=a;
            else c++;
        }else d++,e=a;
    }
    if(c>d)cout<<b;
    else cout<<e;
}