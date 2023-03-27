#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    if(n==1&&k==1)cout<<0;
    else if(n==1&&k==0)cout<<s;
    else if(n>1&&k>=1)
    {
        if(s[0]!='1')k--,s[0]='1';
        int i=1;
        while(k>=1&&i<n)
        {
            if(s[i]!='0')
            {
                s[i]='0';
                k--;
            }
            i++;
        }
        cout<<s;
    }else cout<<s;
}