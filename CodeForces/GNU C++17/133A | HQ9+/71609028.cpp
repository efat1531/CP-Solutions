#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[120];
    cin>>a;
    int b=strlen(a);
    bool g=0;
    for(int i=0;i<b;i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            cout<<"YES";
            g=1;
            break;
        }
    }
    if(g==0)
    {
        cout<<"NO";
    }
 
}