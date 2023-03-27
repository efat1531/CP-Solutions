#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool b=0;
    for(int i=0;i<s.size();i++)
    {
        int count=0;
        for(int j=i;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                count++;
                if(count==7)
                {
                    b=1;
                }
            }else
            {
                break;
            }
        }
    }
    if(b==1)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }
}