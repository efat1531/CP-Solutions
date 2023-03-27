#include<iostream>
using namespace std;
int main()
{
    int n,m;
    bool g=0;
    int count=0;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='W'||a[i][j]=='G'||a[i][j]=='B')
            {
                g=1;
                count++;
            }
        }
    }
    if(g==1&&count==(n*m))
    {
        cout<<"#Black&White";
    }else
    {
        cout<<"#Color";
    }
}