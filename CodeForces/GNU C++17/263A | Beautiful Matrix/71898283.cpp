#include<bits/stdc++.h>
#include<cmath>
#include<string>
#define ll long long int
using namespace  std;
int main()
{
    int a[5][5];
    int b,c;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                b=i;
                c=j;
            }
        }
    }
    b=abs(b-2);
    c=abs(c-2);
    cout<<b+c;
 
 
}