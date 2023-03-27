#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    bool g=false;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==b[a.size()-1-i])g=true;
        else
        {
            g=false;
            break;
        }
    }
    if(g==false)cout<<"NO";
    else cout<<"YES";
}