#include<bits/stdc++.h>
#define db(x) cout<< #x << "  "<<x<<endl
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    bool f=false;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        for(int i=0;i<m;i++)
        {
            if(f==false and a[i]=='.')
            {
                a[i]='W';
                f=true;
            }else if(a[i]=='.')
            {
                a[i]='B';
                f=false;
            }else if(f==false)f=true;
            else f=false;
        }
        if(m%2==0)
        {
            if(f==false)f=true;
            else f=false;
        }
        cout<<a<<endl;
    }
}