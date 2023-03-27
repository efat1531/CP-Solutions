#include<bits/stdc++.h>
#include<string>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char s[n][m];
    bool g=0;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0&&g==0)
        {
            for(int j=0;j<m-1;j++)
            {
                cout<<'.';
            }
            cout<<'#'<<endl;
            g=1;
        }else if(i%2!=0&&g==1)
        {
            cout<<'#';
            for(int j=1;j<m;j++)
            {
                cout<<'.';
            }
            g=0;
            cout<<endl;
        }else
        {
            for(int j=0;j<m;j++)
            {
                cout<<'#';
            }
            cout<<endl;
        }
    }
}