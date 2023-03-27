#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    int sum=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j]&&s[i]!='0')
            {
                s[j]='0';
                sum++;
            }
        }
    }
    if((s.size()-sum)%2==0)
    {
        cout<<"CHAT WITH HER!";
    }else
    {
        cout<<"IGNORE HIM!";
    }
 
}