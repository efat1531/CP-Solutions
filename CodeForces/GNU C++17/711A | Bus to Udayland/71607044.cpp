#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n][10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool g=0;
    for(int i=0;i<n;i++)
    {
        if(a[i][0]=='O'&&a[i][1]=='O')
        {
            a[i][0]='+';a[i][1]='+';
            g=1;
            break;
        }
        if(a[i][3]=='O'&&a[i][4]=='O')
        {
            a[i][3]='+';a[i][4]='+';
            g=1;
            break;
        }
    }
    if(g==1)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }else
    {
        cout<<"NO";
    }
 
}