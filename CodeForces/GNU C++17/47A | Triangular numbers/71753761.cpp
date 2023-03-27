#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    bool g=0;
    for(int i=0;sum<800;)
    {
        i++;
        sum+=i;
        if(n==sum)
        {
            g=1;
            break;
        }
    }
    if(g==1)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
}