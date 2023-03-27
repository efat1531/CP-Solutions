#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='y')
        {
            if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='o'||s[i+1]=='i'||s[i+1]=='u'||s[i+1]=='y')
            {
                s.erase(s.begin()+i+1);
            }else i++;
        }else i++;
    }
    cout<<s;
}