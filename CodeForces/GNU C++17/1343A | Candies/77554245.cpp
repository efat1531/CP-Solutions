#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%3==0)cout<<n/3<<endl;
        else
        {
            int sum=1;
            for(int i=2;i<=n;i=i*2)
            {
                sum+=i;
                if(n%sum==0)
                {
                    cout<<n/sum<<endl;
                    break;
                }
            }
 
        }
    }
}